#include "DataManager.h"


List<Triangle^>^ DataManager::GetTrianglesList(String^ path)
{
	List<Triangle^>^ Triangles = gcnew List<Triangle^>();
	StreamReader^ streamReader = gcnew StreamReader(path);
	array<String^>^ value;

	array<Char>^ delimiter;
	String^ readline;
	String^ symbol = " ,.:;\t\n\r x y = Tr";
	int* coordinates = new int[5];
	int tmp = 0, i = 0, j = 0;
	delimiter = symbol->ToCharArray();

	while (streamReader->Peek() >= 0)
	{
		readline = streamReader->ReadLine();
		value = readline->Split(delimiter, StringSplitOptions::RemoveEmptyEntries);
		if (value->Length > 0)
		{
			for (int i = 0; i < value->Length; i++)
			{
				if (i > 0 && i % 2 == 0)
				{
					if (Int32::TryParse(value[i], tmp))
					{
						coordinates[j] = tmp;
						j++;
					}

				}
			}
			Triangles->Add(gcnew Triangle(coordinates[0], coordinates[1], coordinates[2], coordinates[3], coordinates[4], coordinates[5]));
			j = 0;
		}
	}

	Console::WriteLine("Triangle");
	for each (Triangle^ var in Triangles)
	{
		Console::WriteLine(var->x1 + " " + var->y1 + " " + var->x2 + " " + var->y2 + " " + var->x3 + " " + var->y3);
	}

	
	streamReader->Close();
	return Triangles;
}

List<Rectangles^>^ DataManager::GetRectanglesList(String^ path)
{
	List<Rectangles^>^ Rectangle = gcnew List<Rectangles^>();
	StreamReader^ streamReader = gcnew StreamReader(path);
	array<String^>^ value;
	array<Char>^ delimiter;
	String^ readline;
	String^ symbol = " ,.:;\t\n\r x y =";
	int* coordinates = new int[3];
	int tmp = 0, i = 0, j = 0;
	delimiter = symbol->ToCharArray();

	while (streamReader->Peek() >= 0)
	{
		readline = streamReader->ReadLine();
		value = readline->Split(delimiter, StringSplitOptions::RemoveEmptyEntries);
		if (value->Length > 0)
		{
			for (int i = 0; i < value->Length; i++)
			{
				if (i > 0 && i % 2 == 0)
				{
					if (Int32::TryParse(value[i], tmp))
					{
						coordinates[j] = tmp;
						j++;

					}

				}
			}
			j = 0;
			Rectangle->Add(gcnew Rectangles(coordinates[0], coordinates[1], coordinates[2], coordinates[3]));
		}
	}

	Console::WriteLine("Rectangles");
	for each (Rectangles^ var in Rectangle)
	{
		Console::WriteLine(var->x1 + " " + var->y1 + " " + var->x2 + " " + var->y2 );
	}

	streamReader->Close();
	return Rectangle;
}