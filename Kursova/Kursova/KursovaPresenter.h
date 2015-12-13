#pragma once
#include "Triangle.h"
#include "Rectangles.h"
#include "KursovaModel.h"
#include "ITrianglesRectanglesView.h"
using namespace System;
using namespace System::Collections::Generic;
ref class KursovaPresenter
{
private:
	KursovaModel^ kursovaModel;
	ITrianglesRectanglesView^ trianglesRectanglesView;

public:
	KursovaPresenter(ITrianglesRectanglesView^ view);
	void SetTriangles(String^ path);
	void SetRectangles(String^ path);
	void Search();
	void Show();
	void SetView(ITrianglesRectanglesView^ view);
};

