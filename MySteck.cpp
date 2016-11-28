#include "stdafx.h"
#include "MySteck.h"

CMySteck::CMySteck()
{
	arr = new int[1];
	arr = { nullptr };
	idSteck = 0;
}

void CMySteck::ReallocateMemory()
{
	count_elenent += 16;
	auto vData = new int[count_elenent];
	memcpy(vData, arr, idSteck * sizeof(arr));
	std::swap(vData, arr);
	delete[] vData;
}
void CMySteck::Push(int push)
{
	if (arr == nullptr || count_elenent >= idSteck)
	{
		ReallocateMemory();
	}
	arr[idSteck] = push;
}

CMySteck::~CMySteck()
{
}

bool CMySteck::pull(int& pull)
{
	
	if (idSteck <= 0)
	{
		return false;
	}
	else
	{
		pull = arr[--idSteck];
		return true;
	}
}