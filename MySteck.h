#pragma once
class CMySteck
{
protected:
	int* arr;
	int count_elenent;
	int idSteck;
public:
	void Push(int a);			//��������� ��������..
	bool pull(int& pull);		//��������� �������� � ���������� � �������

	CMySteck();
	~CMySteck();
	///memcpy
};