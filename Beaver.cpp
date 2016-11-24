#include "stdafx.h"
#include "Beaver.h"
#include "Mouse.h"

#define BEAVER_X_SIZE 20

CBeaver::CBeaver()
{
	m_pointer = new int[BEAVER_X_SIZE];
	COUT "i'm Beaver" ENDL;
}

CBeaver::CBeaver(double const x, double const y)
: CMammal(x, y)
{
	COUT "Beaver in " << "x = " << x << " : y = " << y ENDL;
}

CBeaver::CBeaver(const CBeaver& aSource)
{
	if (aSource.m_pointer == nullptr)
	{
		///расперделяю память
		m_pointer = new int[BEAVER_X_SIZE];
		///копируем данные 
		memcpy(m_pointer, aSource.m_pointer, sizeof(*m_pointer) * BEAVER_X_SIZE);
		m_x = aSource.m_x;
		m_y = aSource.m_y;

	}
}

CBeaver::CBeaver(CMouse& wayMouse) :CMammal(wayMouse)
{

}

CBeaver::~CBeaver()
{
	COUT "Beaver DEAD " ENDL;
}

void CBeaver::OnTime(double const dt)
{
	COUT "Beaver running " << dt + 1.1 ENDL;
}
