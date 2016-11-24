#pragma once
class CMammal
{
protected:
	CMammal();

	double m_x;
	double m_y;

public:
	
	CMammal(const double aInitialX, const double aInitialY);
	//конструктор копирования
	//CMammal(const CMammal& aSourse);

	virtual void OnTime(double const dt);

	virtual ~CMammal();
};

