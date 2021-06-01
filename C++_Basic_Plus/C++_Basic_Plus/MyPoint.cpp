
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
문1. x축 y축의 점을 표시하는 MyPoint 클래스를 설계
	- 좌표를 나타내는 두 개의 x, y 데이터 필드
	- 지정 좌표의 점을 생성하는 생성자.
	- x와 y 데이터 필드를 위한 각각 두개의 get함수, set 함수
	- Mypoint 유형의 한 점에서 다른 점까지의 거리를 반환하는 distance 함수
		클래스 UML 다이어그램을 그리고, 클래스를 구현하라.

	ex> (0,0) 과 (10, 30.5) 를 생성하고 두 점 사이의 거리를 표시하는 테스트 프로그램 작성

	1.1 생성된 좌표의 점이 Circle2D클래스의 객체나 Rectangle2D의 객체의 내부에 있는지의 여부를 판단하는 IsIn 함수를 구현하라.
		Circle2D, Rectangle2D 쪽에 isIn(Mypoint& ) 형식 또는
		bool Mypoint::Inin(Circle2D& ) and
		MyPoint::isIn(Rectangle2D &)
		를 구현해서 테스트 하는 프로그램 작성

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
