#pragma once
#ifndef CIRCLE2D_H
#define CIRCLE2D_H

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
#include <utility>

class Circle2D
{
private:
	double x;
	double y;
	double radius;
public:
	Circle2D();
	Circle2D(double x, double y, double r);
	double getx() const
	{
		return x;
	}
	double gety() const
	{
		return y;
	}
	double getradius() const;
	double getarea()const;
	double getPerimeter()const;
	bool contains(double x, double y)const;
	bool contains(const Circle2D & circle)const;
	bool overlaps(const Circle2D & circle)const;



};
#endif // !CIRCLE2D_H
