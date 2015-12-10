#pragma once
#include "Triangle.h"
#include "Rectangles.h"
#include "KursovaModel.h"
ref class KursovaPresenter
{
private:
	KursovaModel^ kursovaModel;

public:
	KursovaPresenter();
	void SetTriangles(String^ path);
	void SetRectangles(String^ path);
};

