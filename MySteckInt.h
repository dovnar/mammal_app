#pragma once
class CMySteckInt
{
protected:
	int* arr;
	int count_elenent = 1;
	int idPull;
public:
	void Push(int a);	//��������� ��������..
	bool pull();			//��������� �������� � ���������� � �������

	CMySteckInt();
	~CMySteckInt();
	///memcpy
};
