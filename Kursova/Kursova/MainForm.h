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
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1006, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�������ToolStripMenuItem,
					this->��������������������������ToolStripMenuItem, this->��������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(57, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(312, 24);
			this->�������ToolStripMenuItem->Text = L"³������ ���� � ������������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�������ToolStripMenuItem_Click);
			// 
			// ��������������������������ToolStripMenuItem
			// 
			this->��������������������������ToolStripMenuItem->Name = L"��������������������������ToolStripMenuItem";
			this->��������������������������ToolStripMenuItem->Size = System::Drawing::Size(312, 24);
			this->��������������������������ToolStripMenuItem->Text = L"³������ ���� � ��������������";
			this->��������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::��������������������������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(312, 24);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::UpdateToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(312, 24);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ExitBtn_Clic);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���������ToolStripMenuItem,
					this->�����������ToolStripMenuItem
			});
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(75, 24);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(179, 24);
			this->���������ToolStripMenuItem->Text = L"��� ������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::���������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(179, 24);
			this->�����������ToolStripMenuItem->Text = L"��� ��������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�����������ToolStripMenuItem_Click);
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

	private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
					 MessageBox::Show("������� ��� ������� �����");
				 }
	}
	private: System::Void ��������������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
			MessageBox::Show("������� ��� ������� �����");
		}		 
	}


	private: System::Void UpdateToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		kursovaPresenter->Show();
	}

	private: System::Void ���������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("������� ������� ����� 1ʲ-15��\n������� ����� ���������", 
			"��� ������", MessageBoxButtons::OK, MessageBoxIcon::None);
	}

	private: System::Void �����������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("� ����i ������ ���������� ������ �����������i�. � i����� ����i ���������� ������ ���������i�. ������� �� ����� ������������ �� ����������. ����������, �� ����i��� ������ ��������i �����������i�, ���i���� ������� ��������. I���� �������� ���i���� �i � ���, �� �������������.", 
			"��� ��������", MessageBoxButtons::OK, MessageBoxIcon::None);
	}


	private: System::Void ExitBtn_Clic(System::Object^ sender, System::EventArgs^ e) {
		Form::Close();
	}
};
}
