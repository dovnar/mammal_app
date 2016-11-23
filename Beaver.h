#pragma once
#include "Mammal.h"
class CBeaver :
	public CMammal
{
public:
	CBeaver();
	CBeaver(double const x, double const y);
	~CBeaver();
	void OnTime(double const dt)override;
};

