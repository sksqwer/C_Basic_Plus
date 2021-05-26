#include "mytime1.h"
#include <iostream>

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset()
{
	hours = minutes = 0;
}

Time Time::operator+(const Time & t) const
{
	Time T;
	T.hours = hours + t.hours;
	T.minutes = minutes + t.minutes;
	T.hours += T.minutes / 60;
	T.minutes %= 60;

	return T;
}

Time Time::operator-(const Time & t) const
{
	Time T;
	int tot1, tot2;
	tot1 = t.minutes + 60 * t.hours;
	tot2 = minutes + 60 * hours;
	T.hours = (tot2 - tot1) / 60;
	T.minutes = (tot2 - tot1) % 60;

	return T;
}

Time Time::operator*(double n) const
{
	Time T;
	long tot;
	tot = minutes + 60 * hours;
	tot *= n;
	T.hours = tot / 60;
	T.minutes = tot % 60;

	return T;
}

void Time::show() const
{
	std::cout << "Hours : " << hours << " Minutes : " << minutes << std::endl;
}
