#include "stdafx.h"
#include "Mammal.h"

CMammal::CMammal()
{
	COUT "hello i'm mammal" ENDL;
}

CMammal::CMammal(const double aInitialX, const double aInitialY)
:m_x(aInitialX),
m_y(aInitialY)
{
	COUT "mammal in " << "x = " << m_x << " : y = " << m_y ENDL;
}

CMammal::~CMammal()
{
	COUT "mammal DEAD " ENDL;
}

void CMammal::OnTime(double const dt)
{
	COUT "Mammal running " ENDL;
}