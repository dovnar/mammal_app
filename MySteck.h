#pragma once
class CMySteck
{
protected:
	int* arr = nullptr;
	size_t count_elenent = 0;
	size_t idSteck = 0;
	void ReallocateMemory();
public:
	void Push(int a);			//��������� ��������..
	bool pull(int& pull);		//��������� �������� � ���������� � �������
	
	CMySteck();
	~CMySteck();
	///memcpy
};