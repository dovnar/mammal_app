#pragma once
class CMySteckInt
{
protected:
	int* arr;
	int count_elenent = 1;
	int idPull;
public:
	void Push(int a);	//принимает значения..
	bool pull();			//возращает значения с последнего к первому

	CMySteckInt();
	~CMySteckInt();
	///memcpy
};
