// Mammal_App.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Mammal.h"
#include "Mouse.h"

int _tmain(int argc, _TCHAR* argv[])
{
	{
		CMammal* vM[40] = { nullptr };

		vM[0] = new CMammal(7., 9.);
		vM[11] = new CMouse(23., 14.);
		for (auto pMammal : vM)
		{
			if (pMammal != nullptr)
			{
				pMammal->OnTime(0.01);
				delete pMammal;
				pMammal = nullptr;
			}
		}
	}
	system("pause");
	return 0;
}

