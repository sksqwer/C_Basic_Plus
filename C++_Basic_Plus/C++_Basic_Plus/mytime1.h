#pragma once

#ifndef MYTIME1_H__
#define MUTIME1_H__

class Time
{
private: 
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m);
	void AddMin(int m);
	void AddHr(int h);
	void Reset();
	Time operator+(const Time & t) const;
	Time operator-(const Time & t) const;
	Time operator*(double n) const;
	void show() const;
};


#endif // !MYTIME1_H__
