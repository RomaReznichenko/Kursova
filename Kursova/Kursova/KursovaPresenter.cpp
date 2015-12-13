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
//�������� �� �������� ��������� ������������
void KursovaPresenter::Search()
{
	for each (Rectangles^ var in kursovaModel->GetRectangles())
	{
		for each (Triangle^ tr in kursovaModel->GetTriangles())
		{
			if (!tr->flag && !tr->isObtuse)
			{
				if (var->TriangleInRectangle(tr))
				{
					tr->flag = true;
				}
				else
				{
					if (var->�rossingFigure(tr)) 
					{
						tr->isObtuse = true;
					}
				}
			}
		}	
	}

}

void KursovaPresenter::Show()
{
	if (kursovaModel->GetTriangles()->Count == 0) return;
	if (kursovaModel->GetRectangles()->Count == 0) return;
	Search();
	//������ ���� 
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
				if (tr->isObtuse) 
				{
					color = Color::Purple;
					trianglesRectanglesView->ShowTriangle(tr, color);
				}
				else
				{
					color = Color::Blue;
					trianglesRectanglesView->ShowTriangle(tr, color);
				}
			}
				
			
		}
		for each (Rectangles^ tr in kursovaModel->GetRectangles())
		{
			trianglesRectanglesView->ShowRectangles(tr, Color::Black, 0);
		}
}

