#include "stdafx.h"
#include "MySteckInt.h"

CMySteckInt::CMySteckInt()
{

}

void CMySteckInt::Push(int a)
{
	memcpy(arr, &a, sizeof(a * (count_elenent )));
	idPull = ++count_elenent;
}

CMySteckInt::~CMySteckInt()
{
}

bool CMySteckInt::pull()
{
	idPull--;
	return arr[idPull];
}