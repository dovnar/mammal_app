#include "stdafx.h"
#include "Beaver.h"


CBeaver::CBeaver()
{
	COUT "i'm Beaver" ENDL;
}

CBeaver::CBeaver(double const x, double const y)
: CMammal(x, y)
{
	COUT "Beaver in " << "x = " << x << " : y = " << y ENDL;
}


CBeaver::~CBeaver()
{
	COUT "Beaver DEAD " ENDL;
}

void CBeaver::OnTime(double const dt)
{
	COUT "Beaver running " << dt + 1.1 ENDL;
}
