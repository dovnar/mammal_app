#include "stdafx.h"
#include "Mouse.h"

CMouse::CMouse() :CMammal()
{
	COUT "i'm Mouse" ENDL;
}

CMouse::CMouse(double const x, double const y) 
: CMammal(x, y)
{
	COUT "Mouse  in " << "x = " << x << " : y = " << y ENDL;
}

CMouse::~CMouse()
{
	COUT "Mouse  DEAD " ENDL;
}

void CMouse::OnTime(double const dt)
{
	COUT "Mouse  running " << dt ENDL;
}
