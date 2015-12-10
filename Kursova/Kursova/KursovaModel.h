#pragma once
#include "Triangle.h"
#include "Rectangles.h"
#include "DataManager.h" 
using namespace System;
using namespace System::Collections::Generic;
ref class KursovaModel
{
private: List<Triangle^>^   triangles;
		 List<Rectangles^>^ rectangles;
public:
	KursovaModel();
	void SetTriangles(String^ path);
	void SetRectangles(String^ path);

	List<Triangle^>^ GetTriangles();
	List<Rectangles^>^ GetRectangles();
};

