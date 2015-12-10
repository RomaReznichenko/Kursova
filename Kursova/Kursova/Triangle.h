#pragma once
using namespace System;
ref class Triangle
{
private: bool isObtuse = false; // перетинаэться з прямокутником
		 bool flag = false; // належить прямокутнику
public:
    int x1, y1, x2, y2, x3, y3;
	Triangle(int x1, int y1, int x2, int y2, int x3, int y3);
};

