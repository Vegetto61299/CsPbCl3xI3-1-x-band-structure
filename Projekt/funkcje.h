#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <complex>
#include "eigen-3.4.0\Eigen\Dense"
#include "eigen-3.4.0\Eigen\Eigenvalues"
#pragma managed
#define pi 3.14159265359
using namespace std::complex_literals;
using namespace Eigen;
const double Tmin = 250;
const double Tmax = 350;
const double evtohart = 0.0367502,
             angsttobohr = 1.889725989;

const double con[2][13] = {
    //eg    delta   gam1    gam2    gam3    mh      ep      a       alfa    c11     c12     av      ac
    {3.04,  1.53,   5.8,    2.2,    0.5,    0.17,   40.1,   5.61,   0.0001, 49,     8,      -5.177, -1.1874}, //cl
    {1.73,  1.44,   9.1,    3.6,    0.7,    0.095,  41.6,   6.238,  0.0009, 34.405, 4.709,  -2.762, -0.177}  //i
};
const double m = 1, h = 1, e = 1; //eV
enum constants {
    eg,delta,g1,g2,g3,mh,ep,a,alf,c11,c12,av,ac,
    Cl=0,
    I=1
};


double interpol(double x, double bowing, double A, double B) {
    double y;
    y = A * x + B * (1 - x) - x * (1 - x) * bowing;
    return y;
}

class hamil {//klasa do obliczenia struktur elektronowych na drodze gamma - R - M
public:
    Eigen::MatrixXcd H;
    double *eigv[5];
    Eigen::SelfAdjointEigenSolver<Eigen::MatrixXcd> solver;
    hamil(double x, double T, double nap, int N) {
        std::fstream plik;
        plik.open("nazwa_pliku.txt", std::fstream::out);

        for (int i = 0; i < 5; i++)
            eigv[i] = new double[N];//Eg
        H.resize(8, 8);
        double B = -2* evtohart;
        double A = interpol(x, 0, con[Cl][a], con[I][a]) * angsttobohr;//bohr radius
        double epsxx = (A * (1 + nap) - A) / (A + A * nap);
        double c11z = interpol(x, 0, con[Cl][c11], con[I][c11]);
        double c12z = interpol(x, 0, con[Cl][c12], con[I][c12]);
        double avz = interpol(x, 0, con[Cl][av], con[I][av]) * (1 + nap / 100)*evtohart;
        double acz = interpol(x, 0, con[Cl][ac], con[I][ac]) * (1 + nap / 100)*evtohart;
        double alfa = interpol(x, 0, con[Cl][alf], con[I][alf]);// nie da³em zale¿noœci od temperatury

        double
            deltaz = interpol(x, 0, con[Cl][delta], con[I][delta]) * evtohart,
            Eg = (interpol(x, 0, con[Cl][eg], con[I][eg]) + alfa * T) * evtohart,
            Ep = interpol(x, 0, con[Cl][ep], con[I][ep]) * evtohart / 2,
            VB0 = 2 * avz * (1 + c12z / c11z) * epsxx * evtohart,
            CS0 = Eg + 2 * acz * (1 - c12z / c11z) * epsxx,
            CH0 = Eg + deltaz + 2 * acz * (1 - c12z / c11z) * epsxx + B * (1 + 2 * c12z / c11z) * epsxx,
            CL0 = Eg + deltaz + 2 * acz * (1 - c12z / c11z) * epsxx - B * (1 + 2 * c12z / c11z) * epsxx,
            mhz = interpol(x, 0, con[Cl][mh], con[I][mh]) * m,
            gamv = 1 / (mhz)-Ep / 3 * (2 / Eg + 1 / (Eg + deltaz)),
            P = sqrt(h * h / 2 / m * Ep),
            gam1 = interpol(x, 0, con[Cl][g1], con[I][g1]) - 1 / 3 * Ep / Eg,
            gam2 = interpol(x, 0, con[Cl][g2], con[I][g2]) - 1 / 6 * Ep / Eg,
            gam3 = interpol(x, 0, con[Cl][g3], con[I][g3]) - 1 / 6 * Ep / Eg;
        double kx = 0, ky = 0, kz = 0;
        for (int k = 0; k < N + 1; k++) {
            if (k <= N / 2) {//Gamma-R
                kx =  - (pi / A) * 0.15 * (N / 2 - k) / N*2;
                ky = - (pi / A) * 0.15 * (N / 2 - k) / N*2;
                kz = - (pi / A) * 0.15 * (N / 2 - k) / N*2;
            }
            else {//R-M
                kx = 0;
                ky = 0;
                kz = - (pi / A) * 0.15 * (k-N/2) / N*2;
            }
            eigv[0][k] = (double)k/N*30-15;
            std::complex<double> // dane hamiltonianu
                VB = VB0 - h * h / 2 / m * gamv * (kx * kx + ky * ky + kz * kz),
                CS = CS0 + h * h / 2 / m * gam1 * (kx * kx + ky * ky + kz * kz),
                CH = CH0 + h * h / 2 / m * ((gam1 + gam2) * (kx * kx + ky * ky) + (gam1 - 2 * gam2) * kz * kz),
                CL = CL0 + h * h / 2 / m * ((gam1 - gam2) * (kx * kx + ky * ky) + (gam1 + 2 * gam2) * kz * kz),
                S = h * h / 2 / m * 2 * sqrt(3) * gam3 * (-kx + ky * 1i) * kz,
                R = h * h / 2 / m * sqrt(3) * (gam2 * (kx * kx - ky * ky) - 2i * gam3 * kx * ky),
                D = h * h / 2 / m * sqrt(2) * gam2 * (kx * kx + ky * ky - 2 * kz * kz),
                Pp = P * (kx + 1i * ky),
                Pm = P * (kx - 1i * ky),
                Pz = P * kz;
            H << VB, 0, 0, 0, 0, 0, 0, 0,
                0, VB, 0, 0, 0, 0, 0, 0,
                1 / sqrt(2) * Pm, 0, CH, 0, 0, 0, 0, 0,
                -sqrt(2) / sqrt(3) * Pz, 1 / sqrt(6) * Pm, conj(S), CL, 0, 0, 0, 0,
                -1 / sqrt(6) * Pp, -sqrt(2) / sqrt(3) * Pz, -conj(R), 0, CL, 0, 0, 0,
                0, -1 / sqrt(2) * Pp, 0, -conj(R), -conj(S), CH, 0, 0,
                -1 / sqrt(3) * Pz, -1 / sqrt(3) * Pm, 1 / sqrt(2) * conj(S), -D, -sqrt(3) / sqrt(2) * S, sqrt(2)* R, CS, 0,
                -1 / sqrt(3) * Pp, 1 / sqrt(3) * Pz, -sqrt(2) * conj(R), -sqrt(3) / sqrt(2) * conj(S), D, 1 / sqrt(2) * S, 0, CS;
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < i; j++)
                    H(j, i) = conj(H(i, j));
            solver.compute(H);
            for(int i=1;i<5;i++)
                eigv[i][k] = solver.eigenvalues()[i*2-1]/evtohart;
        }
        plik << H;
        plik << std::endl;

        plik << solver.eigenvalues() / evtohart;
        plik.close();
    }
};
class firstdata {
public:

    int n;
    double *tab[2];
    firstdata(int N,double bowing,double A,double B) {
        n = N;
        double min = 0;
        double max = 1;
        tab[0] = new double[n];
        tab[1] = new double[n];
        double x = min;
        for (int i = 0; i < n; i++) {
            x = min + i * (max - min) / (n - 1);
            tab[0][i] = x;
            tab[1][i] = interpol(x,bowing,A,B);
        }
    }


};//

class egdata {// dla Eg(T)
public:

    int n;
    double* tab[2];
    egdata(int N) {
        double alfa = interpol(0.5, 0, con[Cl][alf], con[I][alf]);
        double Eg0 = interpol(0.5, 0, con[0][0], con[1][0]);
        n = N;
        tab[0] = new double[n];
        tab[1] = new double[n];
        double x = Tmin;
        for (int i = 0; i < n; i++) {
            x =Tmin + i * (Tmax - Tmin) / (n - 1);
            tab[0][i] = x;
            tab[1][i] = Eg0+alfa*x;
        }
    }

};

class vbdata {// dla vb(T)
public:

    int n;
    double* tab[2];
   vbdata(int N) {
        n = N;
        tab[0] = new double[n];
        tab[1] = new double[n];
        double x = Tmin;
        for (int i = 0; i < n; i++) {
            x = Tmin + i * (Tmax - Tmin) / (n - 1);
            tab[0][i] = x;
            tab[1][i] = 0;
        }
    }


};
class chdata {// dla vb(T)
public:
    int n;
    double* tab[2];
    chdata(int N) {
        double delta = interpol(0.5, 0,con[0][1], con[1][1]);
        double alfa = interpol(0.5, 0, con[Cl][alf], con[I][alf]);
        double Eg0 = interpol(0.5, 0, con[0][0], con[1][0]);
        n = N;
        tab[0] = new double[n];
        tab[1] = new double[n];
        double x = Tmin;
        for (int i = 0; i < n; i++) {
            x = Tmin + i * (Tmax - Tmin) / (n - 1);
            tab[0][i] = x;
            tab[1][i] = Eg0 + alfa * x+delta;
        }
    }
};
