#include "MainForm.h"
#include "KursovaPresenter.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args){

	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Kursova::MainForm^ form = gcnew Kursova::MainForm();
	KursovaPresenter^ kursovaPresenter = gcnew KursovaPresenter();
	kursovaPresenter->SetView(form);
	form->SetTrianglesRectanglesPresenter(kursovaPresenter);
	Application::Run(form);
}