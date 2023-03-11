#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Application::Run(gcnew GreenAtomDev::MyForm);
}

