
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

/*
��1. x�� y���� ���� ǥ���ϴ� MyPoint Ŭ������ ����
	- ��ǥ�� ��Ÿ���� �� ���� x, y ������ �ʵ�
	- ���� ��ǥ�� ���� �����ϴ� ������.
	- x�� y ������ �ʵ带 ���� ���� �ΰ��� get�Լ�, set �Լ�
	- Mypoint ������ �� ������ �ٸ� �������� �Ÿ��� ��ȯ�ϴ� distance �Լ�
		Ŭ���� UML ���̾�׷��� �׸���, Ŭ������ �����϶�.

	ex> (0,0) �� (10, 30.5) �� �����ϰ� �� �� ������ �Ÿ��� ǥ���ϴ� �׽�Ʈ ���α׷� �ۼ�

	1.1 ������ ��ǥ�� ���� Circle2DŬ������ ��ü�� Rectangle2D�� ��ü�� ���ο� �ִ����� ���θ� �Ǵ��ϴ� IsIn �Լ��� �����϶�.
		Circle2D, Rectangle2D �ʿ� isIn(Mypoint& ) ���� �Ǵ�
		bool Mypoint::Inin(Circle2D& ) and
		MyPoint::isIn(Rectangle2D &)
		�� �����ؼ� �׽�Ʈ �ϴ� ���α׷� �ۼ�

*/

double MyPoint::getx() const
{
	return x;
}

double MyPoint::gety() const
{
	return y;
}

void MyPoint::setx(double x)
{
	this->x = x;
}

void MyPoint::sety(double y)
{
	this->y = y;
}

double MyPoint::distance(MyPoint p)
{
	return (sqrt(pow(this->x - p.getx(), 2) + pow(this->y - p.gety(), 2)))  ;
}

bool MyPoint::isIn(Circle2D & c)
{
	return c.contains(x, y);
}

bool MyPoint::isIn(Rectangle2D & r)
{
	return r.contains(x, y);
}
