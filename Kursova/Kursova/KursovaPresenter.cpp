#include "KursovaPresenter.h"


KursovaPresenter::KursovaPresenter(ITrianglesRectanglesView^ view)
{
	this->trianglesRectanglesView = view;
	kursovaModel = gcnew KursovaModel();
}
void KursovaPresenter::SetView(ITrianglesRectanglesView^ view)
{
	trianglesRectanglesView = view;
}


void KursovaPresenter::SetTriangles(String^ path)
{
	kursovaModel->SetTriangles(path);
}

void KursovaPresenter::SetRectangles(String^ path)
{
	kursovaModel->SetRectangles(path);
	Show();

}
//перевіряє чи належить трикутник прямокутнику
void KursovaPresenter::Test()
{
	for each (Rectangles^ var in kursovaModel->GetRectangles())
	{
		for each (Triangle^ tr in kursovaModel->GetTriangles())
		{
			if (var->TriangleInRectangle(tr))
			{
				tr->flag = true;
			}
		}	
	}

}

void KursovaPresenter::Show()
{
	if (kursovaModel->GetTriangles()->Count == 0) return;
	if (kursovaModel->GetRectangles()->Count == 0) return;
	Test();
	//задаємо колір 
		Color color;
		for each (Triangle^ tr in kursovaModel->GetTriangles())
		{
			if (tr->flag)
			{
				color = Color::Green;
				trianglesRectanglesView->ShowTriangle(tr, color);
			}
				
			else
			{
				color = Color::Blue;
				trianglesRectanglesView->ShowTriangle(tr, color);
			}
				
			
		}
		for each (Rectangles^ tr in kursovaModel->GetRectangles())
		{
			trianglesRectanglesView->ShowRectangles(tr, Color::Black, 0);
		}
}

