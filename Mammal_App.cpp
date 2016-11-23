// Mammal_App.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Mammal.h"
#include "Mouse.h"
#include "Beaver.h"
#include "MySteckInt.h"
int _tmain(int argc, _TCHAR* argv[])
{

	{
		const int countMammal = _ttoi(argv[1]);
		srand(time(NULL));
		CMammal** vM = new CMammal*[countMammal];
		for (int i = 0; i < countMammal; i++)
		{
			int mammalType = rand() % 3;
			double positionX = rand() % 80;
			double positionY = rand() % 40;
			switch (mammalType)
			{
			case 0: vM[i] = new CMammal(positionX, positionY);
				break;
			case 1: vM[i] = new CMouse(positionX, positionY);
				break;
			case 2: vM[i] = new CBeaver(positionX, positionY);
				break;
			default:
				break;
			}
		}
		
		for (int i = 0; i < countMammal; i++)
		{
			vM[i]->OnTime(0.1);
		}
		system("pause");
		delete[] vM;
	}

	system("pause");
	return 0;
}

