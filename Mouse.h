#pragma once
#include "Mammal.h"
class CMouse :
	public CMammal
{
public:
	CMouse();
	//����������� �����������
	//CMouse(const CMouse& aSourse);
	CMouse(double const x, double const y);
	~CMouse();

	void OnTime(double const dt)override;
};

