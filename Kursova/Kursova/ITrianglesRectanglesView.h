#pragma once
#include "Triangle.h"
#include "Rectangles.h"

using namespace System::Drawing;

public interface class ITrianglesRectanglesView
{
	public:
		virtual void ShowTriangle(Triangle^ tr, Color color);
		virtual void ShowRectangles(Rectangles^ rc, Color colorm, int hz);
};

