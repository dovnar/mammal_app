#pragma once
class CMammal
{
protected:
	CMammal();

	double m_x;
	double m_y;

public:

	CMammal(const double aInitialX, const double aInitialY);

	virtual ~CMammal();

	virtual void OnTime(double const dt);

};

