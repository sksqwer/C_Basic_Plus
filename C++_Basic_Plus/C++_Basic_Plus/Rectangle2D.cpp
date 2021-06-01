

#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <iomanip>
#include <vector>
#include <array>
#include <cmath>
#include <fstream>
#include <conio.h>
#include <stack>
#include <queue>

#include "StringBad.h"
#include "Circle2D.h"
#include "Rectangle2D.h"
#include "Mypoint.h"

using namespace std;



Rectangle2D::Rectangle2D()
	: x(0), y(0), width(1), height(1) {}

Rectangle2D::Rectangle2D(double x, double y, double width, double height)
	: x(x), y(y), width(width), height(height) {}

double Rectangle2D::getx() const
{
	return x;
}

double Rectangle2D::gety() const
{
	return y;
}

double Rectangle2D::getwidth() const
{
	return width;
}

double Rectangle2D::getheight() const
{
	return height;
}

double Rectangle2D::getArea() const
{
	return width * height;
}

double Rectangle2D::getPerimeter() const
{
	return 2 *(width + height);
}

bool Rectangle2D::contains(double x, double y) const
{
	double hx = width / 2.0;
	double hy = height / 2.0;
	if (x >= this->getx() - hx &&
		x <= this->getx() + hx &&
		y >= this->gety() - hy &&
		y <= this->gety() + hy)
		return true;
	else
		return false;
}

bool Rectangle2D::contains(const Rectangle2D & r) const
{
	double hx = width / 2.0;
	double hy = height / 2.0;
	double hrx = r.getwidth() / 2.0;
	double hry = r.getheight() / 2.0;
	if ((r.getx() - hrx) >= (x - hx) &&
		(r.getx() + hrx) <= x + hx &&
		(r.gety() - hry) >= (y - hy) &&
		(r.gety() + hry) <= (y + hy))
		return true;
	else
		return false;
}

bool Rectangle2D::overlaps(const Rectangle2D & r) const
{
	double hx = width / 2.0;
	double hy = height / 2.0;
	double hrx = r.getwidth() / 2.0;
	double hry = r.getheight() / 2.0;
	if ((r.getx() + hrx) >= (x - hx) && 
		(r.getx() - hrx) <= x + hx &&
		(r.gety() + hry) >= (y - hy) &&
		(r.gety() - hry) <= (y + hy))
		return true;
	else
		return false;
}