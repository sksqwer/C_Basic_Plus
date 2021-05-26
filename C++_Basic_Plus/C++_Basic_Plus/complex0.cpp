#include "complex0.h"

complex::complex()
{
	integer = 0.0;
	complex_number = 0.0;
}

complex::complex(double i, double c)
{
	integer = i;
	complex_number = c;
}

complex complex::operator+(const complex & c) const
{
	complex result;
	result.integer = integer + c.integer;
	result.complex_number = complex_number + c.complex_number;

	return result;
}

complex complex::operator-(const complex & c) const
{
	complex result;
	result.integer = integer - c.integer;
	result.complex_number = complex_number - c.complex_number;

	return result;
}

complex complex::operator*(const complex & c) const
{
	complex result;
	result.integer = integer * c.integer - complex_number * c.complex_number;
	result.complex_number = integer * c.integer + complex_number * c.complex_number;

	return result;
}

complex complex::operator*(double n) const
{
	complex result;
	result.integer = integer * n;
	result.complex_number = complex_number * n;

	return result;
}

complex complex::operator~() const
{
	complex result;
	result.integer = integer;
	result.complex_number = complex_number * -1;

	return result;
}

std::ostream & operator<<(std::ostream & os, const complex & c)
{
	os << "(" << c.integer << ", " << c.complex_number << ")\n";
	return os;
}

std::istream & operator>>(std::istream & is, complex & c)
{
	is >> c.integer >> c.complex_number;
	return is;
}
