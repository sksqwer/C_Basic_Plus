#pragma once
#ifndef COMPLEX__
#define COMPLEX__
#include <iostream>
class complex
{
private:
	double integer;
	double complex_number;
public:
	complex();
	complex(double i, double c);
	complex operator+(const complex &c) const;
	complex operator-(const complex &c) const;
	complex operator*(const complex &c) const;
	complex operator*(double n) const;
	friend complex operator*(double n, const complex &t)
	{
		return t * n; 
	}
	complex operator~() const;
	friend std::ostream & operator<<(std::ostream & os, const complex &c);
	friend std::istream & operator>>(std::istream & is, complex &c);
};






#endif // !COMPLEX__
