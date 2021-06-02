#pragma once

#ifndef MYPOINT_H
#define MYPOINT_H
#include "Circle2D.h"
#include "Rectangle2D.h"

class MyPoint
{
private:
	double x;
	double y;
public:
	MyPoint() : x(0), y(0) {}
	MyPoint(double x, double y) : x(x), y(y) {};
	double getx() const;
	double gety() const;
	void setx(double);
	void sety(double);
	double distance(MyPoint);
	bool isIn(Circle2D &);
	bool isIn(Rectangle2D &);
};

#endif // !MYPOINT_H
