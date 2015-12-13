#pragma once
#include "DataManager.h"
#include "KursovaPresenter.h"
#include "ITrianglesRectanglesView.h"


namespace Kursova {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref struct MainForm : public System::Windows::Forms::Form, public ITrianglesRectanglesView
	{
	private: KursovaPresenter^ kursovaPresenter;
	public:
		MainForm(void)
		{
			InitializeComponent();
		}

		virtual void SetTrianglesRectanglesPresenter()
		{
			this->kursovaPresenter = gcnew KursovaPresenter(this);
		}

		virtual void MainForm::ShowTriangle(Triangle^ tr, Color color) = ITrianglesRectanglesView::ShowTriangle
		{

		}

		virtual void MainForm::ShowRectangles(Rectangles^ rc,  Color colorm, int hz) = ITrianglesRectanglesView::ShowRectangles
		{

		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  â³äêğèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  â³äêğèòèÔàéëÇÏğÿìîêóòíèêàìèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îáíîâèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âèõ³äToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  äîâ³äêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïğîÀâòîğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïğîÏğîãğàìóToolStripMenuItem;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->â³äêğèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->â³äêğèòèÔàéëÇÏğÿìîêóòíèêàìèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáíîâèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèõ³äToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîâ³äêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÀâòîğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÏğîãğàìóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ôàéëToolStripMenuItem,
					this->äîâ³äêàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1006, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->â³äêğèòèToolStripMenuItem,
					this->â³äêğèòèÔàéëÇÏğÿìîêóòíèêàìèToolStripMenuItem, this->îáíîâèòèToolStripMenuItem, this->âèõ³äToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(57, 24);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// â³äêğèòèToolStripMenuItem
			// 
			this->â³äêğèòèToolStripMenuItem->Name = L"â³äêğèòèToolStripMenuItem";
			this->â³äêğèòèToolStripMenuItem->Size = System::Drawing::Size(312, 24);
			this->â³äêğèòèToolStripMenuItem->Text = L"Â³äêğèòè ôàéë ç òğèêóòíèêàìè";
			this->â³äêğèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::â³äêğèòèToolStripMenuItem_Click);
			// 
			// â³äêğèòèÔàéëÇÏğÿìîêóòíèêàìèToolStripMenuItem
			// 
			this->â³äêğèòèÔàéëÇÏğÿìîêóòíèêàìèToolStripMenuItem->Name = L"â³äêğèòèÔàéëÇÏğÿìîêóòíèêàìèToolStripMenuItem";
			this->â³äêğèòèÔàéëÇÏğÿìîêóòíèêàìèToolStripMenuItem->Size = System::Drawing::Size(312, 24);
			this->â³äêğèòèÔàéëÇÏğÿìîêóòíèêàìèToolStripMenuItem->Text = L"Â³äêğèòè ôàéë ç ïğÿìîêóòíèêàìè";
			this->â³äêğèòèÔàéëÇÏğÿìîêóòíèêàìèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::â³äêğèòèÔàéëÇÏğÿìîêóòíèêàìèToolStripMenuItem_Click);
			// 
			// îáíîâèòèToolStripMenuItem
			// 
			this->îáíîâèòèToolStripMenuItem->Name = L"îáíîâèòèToolStripMenuItem";
			this->îáíîâèòèToolStripMenuItem->Size = System::Drawing::Size(312, 24);
			this->îáíîâèòèToolStripMenuItem->Text = L"Îáíîâèòè";
			// 
			// âèõ³äToolStripMenuItem
			// 
			this->âèõ³äToolStripMenuItem->Name = L"âèõ³äToolStripMenuItem";
			this->âèõ³äToolStripMenuItem->Size = System::Drawing::Size(312, 24);
			this->âèõ³äToolStripMenuItem->Text = L"Âèõ³ä";
			// 
			// äîâ³äêàToolStripMenuItem
			// 
			this->äîâ³äêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïğîÀâòîğàToolStripMenuItem,
					this->ïğîÏğîãğàìóToolStripMenuItem
			});
			this->äîâ³äêàToolStripMenuItem->Name = L"äîâ³äêàToolStripMenuItem";
			this->äîâ³äêàToolStripMenuItem->Size = System::Drawing::Size(75, 24);
			this->äîâ³äêàToolStripMenuItem->Text = L"Äîâ³äêà";
			// 
			// ïğîÀâòîğàToolStripMenuItem
			// 
			this->ïğîÀâòîğàToolStripMenuItem->Name = L"ïğîÀâòîğàToolStripMenuItem";
			this->ïğîÀâòîğàToolStripMenuItem->Size = System::Drawing::Size(179, 24);
			this->ïğîÀâòîğàToolStripMenuItem->Text = L"Ïğî àâòîğà";
			// 
			// ïğîÏğîãğàìóToolStripMenuItem
			// 
			this->ïğîÏğîãğàìóToolStripMenuItem->Name = L"ïğîÏğîãğàìóToolStripMenuItem";
			this->ïğîÏğîãğàìóToolStripMenuItem->Size = System::Drawing::Size(179, 24);
			this->ïğîÏğîãğàìóToolStripMenuItem->Text = L"Ïğî ïğîãğàìó";
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->ClientSize = System::Drawing::Size(1006, 721);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void â³äêğèòèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					 OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
					 openFileDialog->Filter = "txt files (*.txt)|*.txt| All files (*.*)|*.*";
					 openFileDialog->FilterIndex = 1;
					 openFileDialog->RestoreDirectory = true;
					 if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
					 {
						 kursovaPresenter->SetTriangles(openFileDialog->FileName);
					 }
				 }
				 catch (Exception^ e)
				 {
					 MessageBox::Show("Ïîìèëêà ïğè â³äêğèòò³ ôàéëó");
				 }
	}
	private: System::Void â³äêğèòèÔàéëÇÏğÿìîêóòíèêàìèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					 OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
					 openFileDialog->Filter = "txt files (*.txt)|*.txt| All files (*.*)|*.*";
					 openFileDialog->FilterIndex = 1;
					 openFileDialog->RestoreDirectory = true;
					 if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
					 {
						 kursovaPresenter->SetRectangles(openFileDialog->FileName);
					 }
				 }
				 catch (Exception^ e)
				 {
					 MessageBox::Show("Ïîìèëêà ïğè â³äêğèòò³ ôàéëó");
				 }
	}
	};
}
