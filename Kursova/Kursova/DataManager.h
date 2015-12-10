#pragma once
#include "Rectangles.h"
#include "Triangle.h"
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
static class DataManager
{
public:
	static List<Triangle^>^ GetTrianglesList(String^ path);
	static List<Rectangles^>^ GetRectanglesList(String^ path);

};
