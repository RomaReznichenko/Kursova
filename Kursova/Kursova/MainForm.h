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
	private:
		KursovaPresenter^ kursovaPresenter;
		Graphics^ g;

	public:
		MainForm(void)
		{
			InitializeComponent();
			this->kursovaPresenter = gcnew KursovaPresenter(this);
			g = this->CreateGraphics();
		}

		virtual void MainForm::ShowTriangle(Triangle^ tr, Color color) = ITrianglesRectanglesView::ShowTriangle
		{
			g = this->CreateGraphics();
			Pen^ pen = gcnew Pen(color, 2.1);
			g->DrawLine(pen, tr->x1, tr->y1, tr->x2, tr->y2);
			g->DrawLine(pen, tr->x2, tr->y2, tr->x3, tr->y3);
			g->DrawLine(pen, tr->x1, tr->y1, tr->x3, tr->y3);
		}

		virtual void MainForm::ShowRectangles(Rectangles^ rc,  Color color, int hz) = ITrianglesRectanglesView::ShowRectangles
		{
			g = this->CreateGraphics();
			Pen^ pen = gcnew Pen(color, 2.1);
			g->DrawRectangle(pen, rc->x1, rc->y1, rc->x2, rc->y2);
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
	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  відкритиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  відкритиФайлЗПрямокутникамиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  обновитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  вихідToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  довідкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  проАвтораToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  проПрограмуToolStripMenuItem;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->відкритиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->відкритиФайлЗПрямокутникамиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обновитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->довідкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проАвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->файлToolStripMenuItem,
					this->довідкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1006, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->відкритиToolStripMenuItem,
					this->відкритиФайлЗПрямокутникамиToolStripMenuItem, this->обновитиToolStripMenuItem, this->вихідToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(57, 24);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// відкритиToolStripMenuItem
			// 
			this->відкритиToolStripMenuItem->Name = L"відкритиToolStripMenuItem";
			this->відкритиToolStripMenuItem->Size = System::Drawing::Size(312, 24);
			this->відкритиToolStripMenuItem->Text = L"Відкрити файл з трикутниками";
			this->відкритиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::відкритиToolStripMenuItem_Click);
			// 
			// відкритиФайлЗПрямокутникамиToolStripMenuItem
			// 
			this->відкритиФайлЗПрямокутникамиToolStripMenuItem->Name = L"відкритиФайлЗПрямокутникамиToolStripMenuItem";
			this->відкритиФайлЗПрямокутникамиToolStripMenuItem->Size = System::Drawing::Size(312, 24);
			this->відкритиФайлЗПрямокутникамиToolStripMenuItem->Text = L"Відкрити файл з прямокутниками";
			this->відкритиФайлЗПрямокутникамиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::відкритиФайлЗПрямокутникамиToolStripMenuItem_Click);
			// 
			// обновитиToolStripMenuItem
			// 
			this->обновитиToolStripMenuItem->Name = L"обновитиToolStripMenuItem";
			this->обновитиToolStripMenuItem->Size = System::Drawing::Size(312, 24);
			this->обновитиToolStripMenuItem->Text = L"Обновити";
			this->обновитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::UpdateToolStripMenuItem_Click);
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(312, 24);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ExitBtn_Clic);
			// 
			// довідкаToolStripMenuItem
			// 
			this->довідкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->проАвтораToolStripMenuItem,
					this->проПрограмуToolStripMenuItem
			});
			this->довідкаToolStripMenuItem->Name = L"довідкаToolStripMenuItem";
			this->довідкаToolStripMenuItem->Size = System::Drawing::Size(75, 24);
			this->довідкаToolStripMenuItem->Text = L"Довідка";
			// 
			// проАвтораToolStripMenuItem
			// 
			this->проАвтораToolStripMenuItem->Name = L"проАвтораToolStripMenuItem";
			this->проАвтораToolStripMenuItem->Size = System::Drawing::Size(179, 24);
			this->проАвтораToolStripMenuItem->Text = L"Про автора";
			this->проАвтораToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::проАвтораToolStripMenuItem_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(179, 24);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::проПрограмуToolStripMenuItem_Click);
			// 
			// MainForm
			// 
			//this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->ClientSize = System::Drawing::Size(1024, 600);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
			this->ResizeEnd += gcnew System::EventHandler(this, &MainForm::UpdateToolStripMenuItem_Click);
			this->SizeChanged += gcnew System::EventHandler(this, &MainForm::UpdateToolStripMenuItem_Click);

		}
#pragma endregion

	private: System::Void відкритиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
					 MessageBox::Show("Помилка при відкритті файлу");
				 }
	}
	private: System::Void відкритиФайлЗПрямокутникамиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
			MessageBox::Show("Помилка при відкритті файлу");
		}		 
	}


	private: System::Void UpdateToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		kursovaPresenter->Show();
	}

	private: System::Void проАвтораToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Виконав студент групи 1КІ-15МС\nПанасюк Андрій Сергійович", 
			"Про автора", MessageBoxButtons::OK, MessageBoxIcon::None);
	}

	private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("У файлi задано координати вершин прямокутникiв. В iншому файлi координати вершин трикутникiв. Вивести на екран прямокутники та трикутники. Трикутники, що повнiстю лежать всерединi прямокутникiв, видiлити окремим кольором. Iншим кольором видiлити тi з них, що перетинаються.", 
			"Про програму", MessageBoxButtons::OK, MessageBoxIcon::None);
	}


	private: System::Void ExitBtn_Clic(System::Object^ sender, System::EventArgs^ e) {
		Form::Close();
	}
};
}
