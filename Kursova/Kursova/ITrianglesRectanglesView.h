#pragma once
#include "Triangle.h"
#include "Rectangles.h"
using namespace System::Drawing;
public interface class ITrianglesRectanglesView
{
public:
	virtual void Show(Triangle^ tr, Rectangles^ rec, Color color);
	//virtual void ShowRectangles(Rectangles^ tr, Color color);
};

