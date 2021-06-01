

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
#include <stack>
#include <queue>
#include <cstdio>

#include "StringBad.h"
#include "Circle2D.h"
#include "Rectangle2D.h"
#include "Mypoint.h"
#include <utility>



using namespace std;



double distance(double x, double y, double _x, double _y);

Circle2D::Circle2D()
{
	x = 0;
	y = 0;
	radius = 1;
}
Circle2D::Circle2D(double x, double y, double r)
{
	this->x = x;
	this->y = y;
	radius = r;
}
double Circle2D::getradius() const
{
	return radius;
}
double Circle2D::getarea() const
{
	return radius * radius * M_PI;
}
double Circle2D::getPerimeter() const
{
	return 2 * M_PI * radius;
}
bool Circle2D::contains(double x, double y) const
{
	pair<double, double> a;
	a.first = x;
	a.second = y;
	double d = distance(this->x, this->y, x, y);
	if (radius >= d)
		return true;
	else
		return false;
}
bool Circle2D::contains(const Circle2D & circle)const
{
	double d = distance(this->x, this->y, circle.getx(), circle.gety());

	if (radius - circle.getradius() >= d)
		return true;
	else
		return false;
}
bool Circle2D::overlaps(const Circle2D & circle)const
{
	if (distance(x, y, circle.getx(), circle.gety()) > (radius + circle.getradius()))
		return false;
	else
		return true;
}



double distance(double x, double y, double _x, double _y)
{
	return sqrt(pow(x - _x, 2) + pow(y - _y, 2));
}