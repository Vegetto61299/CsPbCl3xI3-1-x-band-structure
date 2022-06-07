#pragma once
#include "funkcje.h"



namespace Projekt {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::NumericUpDown^ N;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ bowing;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ parameter;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::NumericUpDown^ naprezenie;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ sklad;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::NumericUpDown^ Temp;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox4;

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->N = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bowing = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->parameter = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->naprezenie = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->sklad = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->Temp = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->N))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bowing))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->naprezenie))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sklad))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Temp))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 114);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Rysuj wykres";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// chart1
			// 
			this->chart1->BorderlineColor = System::Drawing::Color::Black;
			this->chart1->BorderSkin->BackColor = System::Drawing::Color::Black;
			chartArea3->AxisX->IsMarginVisible = false;
			chartArea3->AxisX->LabelAutoFitMaxFontSize = 12;
			chartArea3->AxisX->MajorGrid->LineColor = System::Drawing::Color::LightGray;
			chartArea3->AxisX->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::DashDotDot;
			chartArea3->AxisX->Title = L"x";
			chartArea3->AxisX->TitleAlignment = System::Drawing::StringAlignment::Near;
			chartArea3->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			chartArea3->AxisY->InterlacedColor = System::Drawing::Color::Transparent;
			chartArea3->AxisY->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::NotSet;
			chartArea3->AxisY->MajorGrid->LineColor = System::Drawing::Color::LightGray;
			chartArea3->AxisY->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::DashDotDot;
			chartArea3->AxisY->Title = L"Parametr";
			chartArea3->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Alignment = System::Drawing::StringAlignment::Far;
			legend3->AutoFitMinFontSize = 10;
			legend3->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Right;
			legend3->DockedToChartArea = L"ChartArea1";
			legend3->IsTextAutoFit = false;
			legend3->Name = L"Legend1";
			legend3->Position->Auto = false;
			legend3->Position->Height = 6;
			legend3->Position->Width = 45.79777F;
			legend3->Position->X = 54.20223F;
			legend3->Position->Y = 94;
			legend3->TableStyle = System::Windows::Forms::DataVisualization::Charting::LegendTableStyle::Wide;
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(238, 12);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series9->Legend = L"Legend1";
			series9->Name = L"evb";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series10->Legend = L"Legend1";
			series10->Name = L"ecs";
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series11->Legend = L"Legend1";
			series11->Name = L"ech";
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series12->Legend = L"Legend1";
			series12->Name = L"ecl";
			this->chart1->Series->Add(series9);
			this->chart1->Series->Add(series10);
			this->chart1->Series->Add(series11);
			this->chart1->Series->Add(series12);
			this->chart1->Size = System::Drawing::Size(540, 440);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// N
			// 
			this->N->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->N->Location = System::Drawing::Point(84, 7);
			this->N->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->N->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->N->Name = L"N";
			this->N->Size = System::Drawing::Size(125, 20);
			this->N->TabIndex = 3;
			this->N->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"l. punktów";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"bowing";
			// 
			// bowing
			// 
			this->bowing->DecimalPlaces = 2;
			this->bowing->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->bowing->Location = System::Drawing::Point(80, 32);
			this->bowing->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->bowing->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->bowing->Name = L"bowing";
			this->bowing->Size = System::Drawing::Size(117, 20);
			this->bowing->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Parametr";
			// 
			// parameter
			// 
			this->parameter->FormattingEnabled = true;
			this->parameter->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"E_g (eV)", L"Δ (eV)", L"γ1", L"γ2", L"γ3", L"m_h (m_0)",
					L"E_p (eV)", L"a (Angst)", L"E_g(a) (eV)"
			});
			this->parameter->Location = System::Drawing::Point(79, 58);
			this->parameter->Name = L"parameter";
			this->parameter->Size = System::Drawing::Size(118, 21);
			this->parameter->TabIndex = 11;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(18, 427);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(191, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Zapisz do pliku";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(10, 85);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 23);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Eg(T)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(104, 85);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 23);
			this->button4->TabIndex = 15;
			this->button4->Text = L"E(T), k=(0,0,0)";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// naprezenie
			// 
			this->naprezenie->DecimalPlaces = 1;
			this->naprezenie->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->naprezenie->Location = System::Drawing::Point(93, 26);
			this->naprezenie->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->naprezenie->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->naprezenie->Name = L"naprezenie";
			this->naprezenie->Size = System::Drawing::Size(103, 20);
			this->naprezenie->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 28);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Naprężenie [%]";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(10, 35);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(187, 23);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Wykres profili energetycznych";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Skład x";
			// 
			// sklad
			// 
			this->sklad->DecimalPlaces = 2;
			this->sklad->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->sklad->Location = System::Drawing::Point(93, 52);
			this->sklad->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->sklad->Name = L"sklad";
			this->sklad->Size = System::Drawing::Size(103, 20);
			this->sklad->TabIndex = 20;
			this->sklad->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 65536 });
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(14, 61);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(157, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"ECL=ECH dla braku naprężenia";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->bowing);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->parameter);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(12, 33);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(213, 145);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"1. Liczenie parametrów związku CsPbCl_3x/I_3(1-x)";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Location = System::Drawing::Point(12, 264);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(220, 79);
			this->groupBox3->TabIndex = 24;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"2. Profil energetyczny EVB, ECS, ECH, ECL";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(6, 45);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(193, 23);
			this->button6->TabIndex = 24;
			this->button6->Text = L"Wykres struktur elektronowych";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// Temp
			// 
			this->Temp->Location = System::Drawing::Point(94, 19);
			this->Temp->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 600, 0, 0, 0 });
			this->Temp->Name = L"Temp";
			this->Temp->Size = System::Drawing::Size(103, 20);
			this->Temp->TabIndex = 26;
			this->Temp->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(7, 21);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 13);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Temperatura (K)";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->Temp);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Location = System::Drawing::Point(12, 349);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(220, 72);
			this->groupBox2->TabIndex = 25;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"3. Struktury elektronowe";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->naprezenie);
			this->groupBox4->Controls->Add(this->sklad);
			this->groupBox4->Location = System::Drawing::Point(9, 181);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 77);
			this->groupBox4->TabIndex = 26;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Dane do punktów 2, 3";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(789, 769);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->N);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->N))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bowing))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->naprezenie))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sklad))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Temp))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void series_init(int k) {//inicjalizacja serii punktów w wykresie
		this->chart1->ChartAreas[0]->AxisX->IntervalAutoMode;
		this->chart1->Titles->Clear();
		this->chart1->Annotations->Clear();
		this->chart1->Series->Clear();
		if (k == 0) {//dla pierwszych pomiarów niezależnych od temperatury, eg,a,delta itp
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series5->Legend = L"Legend1";
			series5->Name = L"no-bowing";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series6->Legend = L"Legend1";
			series6->Name = L"bowing";
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);

			this->chart1->Series["no-bowing"]->Enabled = true;
			this->chart1->Series["no-bowing"]->Points->Clear();
			this->chart1->Series["bowing"]->Enabled = true;
			this->chart1->Series["bowing"]->Points->Clear();
		}
		else  if(k==1){//zalezne od temperatury
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series4->Legend = L"Legend1";
			series4->Name = L"vb";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series5->Legend = L"Legend1";
			series5->Name = L"eg";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series6->Legend = L"Legend1";
			series6->Name = L"ch";
			this->chart1->Series->Add(series4);
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Series["vb"]->Enabled = true;
			this->chart1->Series["vb"]->Points->Clear();
			this->chart1->Series["eg"]->Enabled = true;
			this->chart1->Series["eg"]->Points->Clear();
			this->chart1->Series["ch"]->Enabled = true;
			this->chart1->Series["ch"]->Points->Clear();
		}
		else  if (k == 2) {
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series3->Legend = L"Legend1";
			series3->Name = L"VB";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series4->Legend = L"Legend1";
			series4->Name = L"CS";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series5->Legend = L"Legend1";
			series5->Name = L"CH";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series6->Legend = L"Legend1";
			series6->Name = L"CL";
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Series["VB"]->Enabled = true;
			this->chart1->Series["VB"]->Points->Clear();
			this->chart1->Series["CS"]->Enabled = true;
			this->chart1->Series["CS"]->Points->Clear();
			this->chart1->Series["CH"]->Enabled = true;
			this->chart1->Series["CH"]->Points->Clear();
			this->chart1->Series["CL"]->Enabled = true;
			this->chart1->Series["CL"]->Points->Clear();
			this->chart1->Series["CL"]->BorderWidth = 3;
			this->chart1->Series["CH"]->BorderWidth = 3;
			this->chart1->Series["VB"]->BorderWidth = 3;
			this->chart1->Series["CS"]->BorderWidth = 3;
			this->chart1->Size = System::Drawing::Size(540, 740);

			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series7->Name = L"VB0";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series8->Name = L"CS0";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series9->Name = L"CH0";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series10->Name = L"CL0";
			this->chart1->Series->Add(series7);
			this->chart1->Series->Add(series8);
			this->chart1->Series->Add(series9);
			this->chart1->Series->Add(series10);
			this->chart1->Series["VB0"]->Enabled = true;
			this->chart1->Series["VB0"]->Points->Clear();
			this->chart1->Series["CS0"]->Enabled = true;
			this->chart1->Series["CS0"]->Points->Clear();
			this->chart1->Series["CH0"]->Enabled = true;
			this->chart1->Series["CH0"]->Points->Clear();
			this->chart1->Series["CL0"]->Enabled = true;
			this->chart1->Series["CL0"]->Points->Clear();
			this->chart1->Series["CL0"]->BorderWidth = 1;
			this->chart1->Series["CH0"]->BorderWidth = 1;
			this->chart1->Series["VB0"]->BorderWidth = 1;
			this->chart1->Series["CS0"]->BorderWidth = 1;
			this->chart1->Series["CL0"]->Color= System::Drawing::Color::Black;
			this->chart1->Series["CH0"]->Color= System::Drawing::Color::Black;
			this->chart1->Series["VB0"]->Color= System::Drawing::Color::Black;
			this->chart1->Series["CS0"]->Color= System::Drawing::Color::Black;
			this->chart1->Series["CL0"]->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			this->chart1->Series["CH0"]->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			this->chart1->Series["VB0"]->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			this->chart1->Series["CS0"]->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			this->chart1->Series["VB0"]->IsVisibleInLegend = 0;
			this->chart1->Series["CH0"]->IsVisibleInLegend = 0;
			this->chart1->Series["CS0"]->IsVisibleInLegend = 0;
			this->chart1->Series["CL0"]->LegendText = "Odniesienie";
		}
	}
	void chartsetup(int k) {
		this->chart1->Titles->Clear();
		this->chart1->ChartAreas[0]->AxisX->Title = L"x";
		this->chart1->Size = System::Drawing::Size(540, 440);
		if (k == 0) {
			if ((double)bowing->Value != 0) {
				this->chart1->ChartAreas[0]->AxisY->Maximum = this->chart1->Series["bowing"]->Points->FindMaxByValue()->YValues[0];
				this->chart1->ChartAreas[0]->AxisY->Minimum = this->chart1->Series["bowing"]->Points->FindMinByValue()->YValues[0];
			}
			else {
				this->chart1->ChartAreas[0]->AxisY->Maximum = this->chart1->Series["no-bowing"]->Points->FindMaxByValue()->YValues[0];
				this->chart1->ChartAreas[0]->AxisY->Minimum = this->chart1->Series["no-bowing"]->Points->FindMinByValue()->YValues[0];
			}
		}
		else if(k==1){
			this->chart1->ChartAreas[0]->AxisY->Maximum = this->chart1->Series["ch"]->Points->FindMaxByValue()->YValues[0];
			this->chart1->ChartAreas[0]->AxisY->Minimum = this->chart1->Series["vb"]->Points->FindMinByValue()->YValues[0];
			this->chart1->ChartAreas[0]->AxisY->Title = "E (eV)";
		}
		else if (k == 2) {
			this->chart1->Titles->Add("naprężenie = " + naprezenie->Value + "%, x = " + sklad->Value);
			this->chart1->ChartAreas[0]->AxisX->Title = L"x (nm)";
			this->chart1->ChartAreas[0]->AxisY->Maximum = this->chart1->Series["CH"]->Points->FindMaxByValue()->YValues[0];
			if(this->chart1->ChartAreas[0]->AxisY->Maximum< this->chart1->Series["CL"]->Points->FindMaxByValue()->YValues[0])
				this->chart1->ChartAreas[0]->AxisY->Maximum = this->chart1->Series["CL"]->Points->FindMaxByValue()->YValues[0];
			if (this->chart1->ChartAreas[0]->AxisY->Maximum < this->chart1->Series["CS"]->Points->FindMaxByValue()->YValues[0])
				this->chart1->ChartAreas[0]->AxisY->Maximum = this->chart1->Series["CS"]->Points->FindMaxByValue()->YValues[0];
			this->chart1->ChartAreas[0]->AxisY->Minimum = this->chart1->Series["VB"]->Points->FindMinByValue()->YValues[0];
			this->chart1->ChartAreas[0]->AxisX->Maximum = 150;
			this->chart1->ChartAreas[0]->AxisX->Minimum =0;
			this->chart1->ChartAreas[0]->AxisY->Title = "E (eV)";
			this->chart1->Size = System::Drawing::Size(383, 440);
		}
			   this->chart1->ChartAreas[0]->AxisY->Interval = (this->chart1->ChartAreas[0]->AxisY->Maximum - this->chart1->ChartAreas[0]->AxisY->Minimum) / 10;
			   this->chart1->ChartAreas[0]->AxisX->LabelStyle->Format = "##0.00";
			   this->chart1->ChartAreas[0]->AxisY->LabelStyle->Format = "##0.000";
			   this->chart1->ChartAreas[0]->AxisX->Interval = (this->chart1->ChartAreas[0]->AxisX->Maximum - this->chart1->ChartAreas[0]->AxisX->Minimum) / 5;
			   this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		series_init(0);
		int k = this->parameter->SelectedIndex;

		if (k >= 0 && k != 8) {

			double A, B;
			A = con[0][k], B = con[1][k];
			firstdata daneb((int)N->Value, (double)bowing->Value, A, B);
			firstdata dane((int)N->Value, 0, A, B);

			for (int i = 0; i < N->Value; i++) {
				chart1->Series["no-bowing"]->Points->AddXY(dane.tab[0][i], dane.tab[1][i]);
				if ((double)bowing->Value != 0)chart1->Series["bowing"]->Points->AddXY(daneb.tab[0][i], daneb.tab[1][i]);
			}
			this->chart1->ChartAreas[0]->AxisX->Title = "x";
			this->chart1->ChartAreas[0]->AxisX->Maximum = 1;
			this->chart1->ChartAreas[0]->AxisX->Minimum = 0;
		}
		else if (k == 8) {

			double A = con[0][7], B = con[1][7], C = con[0][0], D = con[1][0];
			firstdata dane((int)N->Value, 0, A, B);
			firstdata dane2((int)N->Value, 0, C, D);
			double ma = dane.tab[1][0], mi = dane.tab[1][0];
			firstdata daneb((int)N->Value, (double)bowing->Value, A, B);
			firstdata daneb2((int)N->Value, (double)bowing->Value, C, D);
			for (int i = 0; i < N->Value; i++) {
				chart1->Series["no-bowing"]->Points->AddXY(dane.tab[1][i], dane2.tab[1][i]);

				if (ma < dane.tab[1][i]) ma = dane.tab[1][i];
				if (mi > dane.tab[1][i]) mi = dane.tab[1][i];
				if ((double)bowing->Value != 0) {
					chart1->Series["bowing"]->Points->AddXY(daneb.tab[1][i], daneb2.tab[1][i]);
					if (ma < daneb.tab[1][i]) ma = daneb.tab[1][i];
					if (mi > daneb.tab[1][i]) mi = daneb.tab[1][i];
				}

			}
			this->chart1->ChartAreas[0]->AxisX->Title = "a (Angst)";
			this->chart1->ChartAreas[0]->AxisX->Maximum = ma;
			this->chart1->ChartAreas[0]->AxisX->Minimum = mi;
		}
		else return;
		chartsetup(0);
		this->chart1->ChartAreas[0]->AxisY->Title = this->parameter->SelectedItem->ToString();
	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		series_init(0);
		this->chart1->ChartAreas[0]->AxisY->Title = "Eg (eV)";
		egdata dane((int)N->Value);
		for (int i = 0; i < N->Value; i++) {
			chart1->Series["no-bowing"]->Points->AddXY(dane.tab[0][i], dane.tab[1][i]);
		}
		this->chart1->ChartAreas[0]->AxisX->Title = "T (K)";
		this->chart1->ChartAreas[0]->AxisX->Maximum = Tmax;
		this->chart1->ChartAreas[0]->AxisX->Minimum = Tmin;

		chartsetup(0);
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		series_init(1);
		this->chart1->ChartAreas[0]->AxisY->Title = "Eg (eV)";
		this->chart1->ChartAreas[0]->AxisX->Title = "k [%]";
		vbdata danevb((int)N->Value);
		chdata danech((int)N->Value);
		egdata daneeg((int)N->Value);

		for (int i = 0; i < N->Value; i++) {
			this->chart1->Series["vb"]->Points->AddXY(danevb.tab[0][i], danevb.tab[1][i]);
			this->chart1->Series["eg"]->Points->AddXY(daneeg.tab[0][i], daneeg.tab[1][i]);
			this->chart1->Series["ch"]->Points->AddXY(danech.tab[0][i], danech.tab[1][i]);
		}
		this->chart1->ChartAreas[0]->AxisX->Maximum = Tmax;
		this->chart1->ChartAreas[0]->AxisX->Minimum = Tmin;
		this->chart1->ChartAreas[0]->AxisX->Title = "T (K)";
		chartsetup(1);
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->chart1->SaveImage("wykres" + "nap " + naprezenie->Value + "%, x=" + sklad->Value + ", T=" + Temp->Value +".png", System::Drawing::Imaging::ImageFormat::Png);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		double B = -2;
		double ab = interpol((double)sklad->Value,0, con[0][7], con[1][7]);
		double aa = ab * (1 + ((double)naprezenie->Value) / 100);
		double epsxx = (aa - ab) / ab;
		double c11z = interpol((double)sklad->Value, 0, con[Cl][c11], con[I][c11]);
		double c12z = interpol((double)sklad->Value, 0, con[Cl][c12], con[I][c12]);
		double avz = interpol((double)sklad->Value, 0, con[Cl][av], con[I][av]) * (1 + ((double)naprezenie->Value) / 100);
		double acz = interpol((double)sklad->Value, 0, con[Cl][ac], con[I][ac]) * (1 + ((double)naprezenie->Value) / 100);

		double Egb = interpol((double)sklad->Value, 0, con[0][0], con[1][0]);
		double deltab = interpol((double)sklad->Value, 0, con[0][1], con[1][1]);

		double evba = 0;
		double ecsa = 4+Egb;
		double evbb = 1 + 2 * avz*(1 + c12z / c11z) * epsxx;
		double ecsb = 1+Egb + 2 * acz*(1 - c12z / c11z) * epsxx;
		double echb = Egb + deltab + 2 * acz*(1 - c12z / c11z) * epsxx+B*(1+2*c12z/c11z)*epsxx;
		double eclb = Egb + deltab + 2 * acz*(1 - c12z / c11z) * epsxx - B * (1 + 2 * c12z / c11z) * epsxx;

		double x[6] = { 0,50,50,100,100,150 };
		double evb[6] = { evba ,evba ,evbb, evbb, evba ,evba };
		double ecs[6] = { ecsa ,ecsa ,ecsb, ecsb, ecsa ,ecsa };
		double ech[6] = { echb ,echb };
		double ecl[6] = {eclb ,eclb };

		series_init(2);

		for (int i = 0; i < 6; i++) {
			chart1->Series["VB"]->Points->AddXY(x[i], evb[i]);
			chart1->Series["CS"]->Points->AddXY(x[i], ecs[i]);
			if (i == 2 || i == 3) {
				chart1->Series["CH"]->Points->AddXY(x[i], ech[i-2]);
				chart1->Series["CL"]->Points->AddXY(x[i], ecl[i-2]);
			}
		}

		chartsetup(2);
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	double n = (double)N->Value;
	hamil gmr((double)sklad->Value,(double)Temp->Value,(double)naprezenie->Value/100, (int)n);
	hamil gmr0(0.5, 300, 0, (int)n);
	series_init(2);
	for (int i = 0; i < n; i++) {
		this->chart1->Series["VB"]->Points->AddXY(gmr.eigv[0][i], gmr.eigv[1][i]);
		this->chart1->Series["CS"]->Points->AddXY(gmr.eigv[0][i], gmr.eigv[3][i]);
		this->chart1->Series["CH"]->Points->AddXY(gmr.eigv[0][i], gmr.eigv[5][i]);
		this->chart1->Series["CL"]->Points->AddXY(gmr.eigv[0][i], gmr.eigv[7][i]);
		this->chart1->Series["VB"]->Points->AddXY(gmr.eigv[0][i], gmr.eigv[2][i]);
		this->chart1->Series["CS"]->Points->AddXY(gmr.eigv[0][i], gmr.eigv[4][i]);
		this->chart1->Series["CH"]->Points->AddXY(gmr.eigv[0][i], gmr.eigv[6][i]);
		this->chart1->Series["CL"]->Points->AddXY(gmr.eigv[0][i], gmr.eigv[8][i]);
		this->chart1->Series["VB0"]->Points->AddXY(gmr0.eigv[0][i], gmr0.eigv[1][i]);
		this->chart1->Series["CS0"]->Points->AddXY(gmr0.eigv[0][i], gmr0.eigv[3][i]);
		this->chart1->Series["CH0"]->Points->AddXY(gmr0.eigv[0][i], gmr0.eigv[5][i]);
		this->chart1->Series["CL0"]->Points->AddXY(gmr0.eigv[0][i], gmr0.eigv[7][i]);
}

	this->chart1->Titles->Add("GAMMA-R-M, naprężenie = " + naprezenie->Value + "%, x = " + sklad->Value+ ", T= " + Temp->Value+" (K)");
	this->chart1->Titles[0]->Font= (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));;
	this->chart1->ChartAreas[0]->AxisX->Title = L"k (% ścieżki)";
	this->chart1->ChartAreas[0]->AxisX->Maximum = 15;
	this->chart1->ChartAreas[0]->AxisX->Minimum = -15;
	this->chart1->ChartAreas[0]->AxisY->Title = "E (eV)";
	this->chart1->ChartAreas[0]->AxisX->Interval = 5;

	this->chart1->ChartAreas[0]->AxisY->Maximum = 6;
	this->chart1->ChartAreas[0]->AxisY->Minimum = -1;
	this->chart1->ChartAreas[0]->AxisY->Interval = 1;
	this->chart1->ChartAreas[0]->AxisY->LabelStyle->Format = "##0";
	this->chart1->ChartAreas[0]->AxisX->LabelStyle->Format = "##0";
}
};
}
