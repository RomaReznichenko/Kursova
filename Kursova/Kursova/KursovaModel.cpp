#include "KursovaModel.h"


KursovaModel::KursovaModel()
{
	triangles = gcnew  List<Triangle^>();
	rectangles = gcnew  List<Rectangles^>();
}

void KursovaModel::SetTriangles(String^ path)
{
	triangles = DataManager::GetTrianglesList(path);
}

void KursovaModel::SetRectangles(String^ path)
{
	rectangles = DataManager::GetRectanglesList(path);
}

List<Triangle^>^ KursovaModel::GetTriangles()
{
	return triangles;
}

List<Rectangles^>^ KursovaModel::GetRectangles()
{
	return rectangles;
}