#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ argv) {//Platform::Array<Platform::String^>^ argv
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Projekt::MyForm form;
	Application::Run(% form);
}
