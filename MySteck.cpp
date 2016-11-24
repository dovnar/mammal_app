#include "stdafx.h"
#include "MySteck.h"

CMySteck::CMySteck()
{
	arr = new int[1];
	idSteck = 0;
}

void CMySteck::Push(int push)
{
	idSteck++;
	int* arr2 = new int[idSteck];
	memcpy(arr2, arr, sizeof(int)*idSteck);
	delete[] arr;
	arr = new int[idSteck];
	memcpy(arr, arr2, sizeof(int)*idSteck);
	arr[idSteck - 1] = push;
	delete[] arr2;
}

CMySteck::~CMySteck()
{
}

bool CMySteck::pull(int& pull)
{
	idSteck--;
	if (idSteck < NULL)
	{
		return false;
	}
	else
	{
		pull = arr[idSteck];
		return true;
	}
}