#pragma once
class CMySteck
{
protected:
	int* arr;
	int count_elenent;
	int idSteck;
public:
	void Push(int a);			//принимает значения..
	bool pull(int& pull);		//возращает значения с последнего к первому

	CMySteck();
	~CMySteck();
	///memcpy
};