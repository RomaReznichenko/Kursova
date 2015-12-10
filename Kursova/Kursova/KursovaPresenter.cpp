#include "KursovaPresenter.h"


KursovaPresenter::KursovaPresenter()
{
	kursovaModel = gcnew KursovaModel();
}

void KursovaPresenter::SetTriangles(String^ path)
{
	kursovaModel->SetTriangles(path);
}

void KursovaPresenter::SetRectangles(String^ path)
{
	kursovaModel->SetRectangles(path);
}