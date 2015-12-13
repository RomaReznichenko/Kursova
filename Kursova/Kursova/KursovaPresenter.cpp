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
		trianglesRectanglesView->ShowRectangles(var, Color::Red, 0);
		for each (Triangle^ tr in kursovaModel->GetTriangles())
		{
			if (var->TriangleInRectangle(tr))
			{
				tr->flag = true;
				trianglesRectanglesView->ShowTriangle(tr, Color::Green);
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
	for each (Rectangles^ var in kursovaModel->GetRectangles())
	{
		Color color;
		for each (Triangle^ tr in kursovaModel->GetTriangles())
		{
			//trianglesRectanglesView->Show(tr,var, color);
		}
	
	}


}