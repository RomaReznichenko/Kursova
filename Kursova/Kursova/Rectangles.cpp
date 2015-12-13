#include "Rectangles.h"


Rectangles::Rectangles(int x1, int y1, int x2, int y2)
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}
//ïîâåğòàº true ÿêùî òğèêóòíèê íàëåæèòü ïğÿìîêóòíèêó
bool Rectangles::TriangleInRectangle(Triangle^ tr)
{
	if (tr->x1 > x1 && tr->y1 > y1 && tr->x1 < x2 && tr->y1 < y2		&& tr->x2 > x1 && tr->y2 > y1 && tr->x2 < x2 && tr->y2 < y2 &&
		tr->x3 > x1 && tr->y3 > y1 && tr->x3 < x2 && tr->y3 < y2)
		return true;
	else
	{
		return false;
	}
}

bool Rectangles::ÑrossingFigure(Triangle^ tr) 
{
	pt pr1, pr2, pt1, pt2;

	pr1.x = x1; pr1.y = y1; pr2.x = x2; pr2.y = y1;

	pt1.x = tr->x1; pt1.y = tr->y1; pt2.x = tr->x2; pt2.y = tr->y2;

	if (intersect(pr1, pr2, pt1, pt2))
		return true;
	//
	pr1.x = x1; pr1.y = y1; pr2.x = x2; pr2.y = y1;

	pt1.x = tr->x2; pt1.y = tr->y2; pt2.x = tr->x3; pt2.y = tr->y3;

	if (intersect(pr1, pr2, pt1, pt2))
		return true;
	//
	pr1.x = x1; pr1.y = y1; pr2.x = x2; pr2.y = y1;

	pt1.x = tr->x1; pt1.y = tr->y1; pt2.x = tr->x3; pt2.y = tr->y3;

	if (intersect(pr1, pr2, pt1, pt2))
		return true;
	//

	///////////////////////////////////////
	pr1.x = x2; pr1.y = y1; pr2.x = x2; pr2.y = y2;

	pt1.x = tr->x1; pt1.y = tr->y1; pt2.x = tr->x2; pt2.y = tr->y2;

	if (intersect(pr1, pr2, pt1, pt2))
		return true;
	//
	pr1.x = x2; pr1.y = y1; pr2.x = x2; pr2.y = y2;

	pt1.x = tr->x2; pt1.y = tr->y2; pt2.x = tr->x3; pt2.y = tr->y3;

	if (intersect(pr1, pr2, pt1, pt2))
		return true;
	//
	pr1.x = x2; pr1.y = y1; pr2.x = x2; pr2.y = y2;

	pt1.x = tr->x1; pt1.y = tr->y1; pt2.x = tr->x3; pt2.y = tr->y3;

	if (intersect(pr1, pr2, pt1, pt2))
		return true;
	//

	//////////////////////////////////////////
	pr1.x = x2; pr1.y = y2; pr2.x = x1; pr2.y = y2;

	pt1.x = tr->x1; pt1.y = tr->y1; pt2.x = tr->x2; pt2.y = tr->y2;

	if (intersect(pr1, pr2, pt1, pt2))
		return true;
	//
	pr1.x = x2; pr1.y = y2; pr2.x = x1; pr2.y = y2;

	pt1.x = tr->x2; pt1.y = tr->y2; pt2.x = tr->x3; pt2.y = tr->y3;

	if (intersect(pr1, pr2, pt1, pt2))
		return true;
	//
	pr1.x = x2; pr1.y = y2; pr2.x = x1; pr2.y = y2;

	pt1.x = tr->x1; pt1.y = tr->y1; pt2.x = tr->x3; pt2.y = tr->y3;

	if (intersect(pr1, pr2, pt1, pt2))
		return true;
	//

	/////////////////////////////////////////////
	pr1.x = x1; pr1.y = y1; pr2.x = x1; pr2.y = y2;

	pt1.x = tr->x1; pt1.y = tr->y1; pt2.x = tr->x2; pt2.y = tr->y2;

	if (intersect(pr1, pr2, pt1, pt2))
		return true;
	//
	pr1.x = x1; pr1.y = y1; pr2.x = x1; pr2.y = y2;

	pt1.x = tr->x2; pt1.y = tr->y2; pt2.x = tr->x3; pt2.y = tr->y3;

	if (intersect(pr1, pr2, pt1, pt2))
		return true;
	//
	pr1.x = x1; pr1.y = y1; pr2.x = x1; pr2.y = y2;

	pt1.x = tr->x1; pt1.y = tr->y1; pt2.x = tr->x3; pt2.y = tr->y3;

	if (intersect(pr1, pr2, pt1, pt2))
		return true;

	return false;
}