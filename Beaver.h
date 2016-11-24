#pragma once
#include "Mammal.h"
class CMouse;

class CBeaver :
	public CMammal
{
	int* m_pointer = nullptr;
public:
	CBeaver();
	//конструктор копирования
	CBeaver(const CBeaver& aSourse);
	CBeaver(CMouse& wayMouse);
	CBeaver(double const x, double const y);
	~CBeaver();
	void OnTime(double const dt)override;
};

