#include "stdafx.h"
#include "Mouse.h"

#define COUT std::cout << 
#define ENDL << std::endl

CMouse::CMouse() :CMammal()
{
	COUT "i'm Mouse" ENDL;
}

CMouse::CMouse(double const x, double const y) 
: CMammal(x, y)
{
	COUT "hello, i'm Mouse" ENDL;
}

CMouse::~CMouse()
{
	COUT "Mouse DEAD" ENDL;
}
