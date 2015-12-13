#pragma once
#include "Triangle.h"

ref class Rectangles
{
public:
	int x1, y1, x2, y2;
	Rectangles(int x1, int y1, int x2, int y2);
	bool TriangleInRectangle(Triangle^ tr);
	
};

