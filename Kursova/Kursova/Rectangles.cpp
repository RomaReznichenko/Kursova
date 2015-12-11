#include "Rectangles.h"


Rectangles::Rectangles(int x1, int y1, int x2, int y2)
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}
//повертає true якщо трикутник належить прямокутнику
bool Rectangles::TriangleInRectangle(Triangle^ tr)
{
	if (tr->x1 > x1 && tr->y1 > y1 && tr->x1<x2 && tr->y1<y2		&& tr->x2>x1 && tr->y2>y1 && tr->x2<x2 && tr->y2<y2 &&
		tr->x3>x1 && tr->y3>y1 && tr->x3 < x2 && tr->y3 < y2)
		return true;
	else
	{
		return false;
	}
}