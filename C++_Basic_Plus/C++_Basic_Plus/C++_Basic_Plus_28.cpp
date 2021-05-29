

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

using namespace std;

/*
문1
	다음을 포함하는 Circle2D를 정의하라.
	- 원의 중심을 나타내는 x와 y라는 두개의 double 데이터 필드와
		get 상수 함수
	- double 데이터 필드 radius 와 get 상수 함수
	- (x,y) 가 (0,0), radius가 1인 기본 원을 생성하는 인수 없는 생성자
	-지정된 x,y,radius로 원을 생성하는 생성자.
	- 원의 면적을 반환하는 getArea() 상수 함수
	- 원의 둘레를 반환하는 getPerimeter() 상수 함수
	- 지정된 점(x,y)가 생성된 원 내부에 있을 경우,
		true를 반환하는 contains(double x, double y)상수 함수
	- 지정된 원이 생성된 원 내부에 있을 경우,
		true를 반환하는 contains(const Circle2D& circle) 상수 함수
	- 지정된 원이 생성된 원과 중첩되는 경우,
		true를 반환하는 overlap(const Circle2d& circle) 상수 함수
	- 클래스에 대한 UML다이어그램을 그리고, 클래스를 구현하라.

	Circle2D객체 c1(2, 2, 5.5), c2(2, 2, 5.5), c3(4, 5, 10,5)를 생성하고
		c1의 면적과 둘레,
		c1.contatins(3,3), c1.contains(c2), c1.overlaps(c3)의 결과를
		화면에 출력하는 테스트 프로그램을 작성하라
*/
//
//class Circle2D
//{
//private:
//	pair <double, double> coord;
//	double radius;
//public:
//	Circle2D();
//	Circle2D(double x, double y, double r);
//	pair<double, double>  getcoord() const;
//	double getradius() const;
//	double const getarea();
//	double const getPerimeter();
//	bool const contains(double x, double y);
//	bool const contains(const Circle2D & circle);
//	bool const overlaps(const Circle2D & circle);
//
//
//
//};
//
//double distance(pair<double, double>, pair<double, double>);
//
//int main()
//{
//	Circle2D c1(2, 2, 5.5);
//	Circle2D c2(2, 2, 5.5);
//	Circle2D c3(4, 5, 10.5);
//
//	cout << "c1의 면적" << c1.getarea() << endl;
//	cout << "c1의 둘레" << c1.getPerimeter() << endl;
//
//	if (c1.contains(3, 3))
//		cout << "(3,3)은 c1에 포함된다.\n";
//	else
//		cout << "(3,3)은 c1에 포함되지 않는다.\n";
//
//	if (c1.contains(c2))
//		cout << "c2은 c1에 포함된다.\n";
//	else
//		cout << "c2은 c1에 포함되지 않는다.\n";
//
//	if (c1.overlaps(c3))
//		cout << "c3는 c1과 겹친다.\n";
//	else
//		cout << "c3는 c1과 겹치지 않는다.\n";
//
//
//
//
//
//
//	return 0;
//
//}
//
//
//Circle2D::Circle2D()
//{
//	coord.first = 0;
//	coord.second = 0;
//	radius = 1;
//}
//Circle2D::Circle2D(double x, double y, double r)
//{
//	coord.first = x;
//	coord.second = y;
//	radius = r;
//}
//pair<double, double>  Circle2D::getcoord() const
//{
//	return coord;
//}
//double Circle2D::getradius() const
//{
//	return radius;
//}
//double const Circle2D::getarea()
//{
//	return radius * radius * M_PI;
//}
//double const Circle2D::getPerimeter()
//{
//	return 2 * M_PI * radius;
//}
//bool const Circle2D::contains(double x, double y)
//{
//	pair<double, double> a;
//	a.first = x;
//	a.second = y;
//	double d = distance(coord, a);
//	if (radius >= d)
//		return true;
//	else
//		return false;
//}
//bool const Circle2D::contains(const Circle2D & circle)
//{
//	double d = distance(coord, circle.getcoord());
//
//	if (radius - circle.getradius() >= d)
//		return true;
//	else
//		return false;
//}
//bool const Circle2D::overlaps(const Circle2D & circle)
//{
//	if (coord == circle.getcoord() && radius == circle.getradius())
//		return true;
//	else
//		return false;
//}
//
//
//double distance(pair<double, double> a, pair<double, double> b)
//{
//	return sqrt(pow(a.first - b.first, 2) + pow(b.second - b.second, 2));
//}

/*
문2 
	다음을 포함하는 Rectangle2D클래스를 정의하라.
	- 직사각형의 중심을 나타내는 x, y라는 두 개의 double 데이터 필드, 
		이에대한 get 상수 함수와 set 함수, 사각형의 변은 x축과 y축에 
		평행인 것으로 가정한다.
	- double 데이터 필드 width와 heigh, 이에 대한 get, set 상수 함수
	- (x,y)는 (0,0), width와 height는 모두 1인 기본 직사각형을 생성하는
		인수없는 생성자.
	- 지정된 x,y,width, height로 직사각형을 생성하는 생성자
	- 직사각형의 면적을 반환하는 getArea() 상수함수
	- 직사각형의 둘레를 반환하는 get Perimeter() 상수 함수
	- 지정된 점(x,y)가 생성된 직사각형 내부에 있을 경우, true를 반환하는
		contains(double x, double y) 상수 함수
	- 지정된 직사각형이 생성된 직사각형 내부에 있을 경우, true를 반환하는
		contains(const Rectangle2D& r) 상수 함수
	- 지정된 직사각형이 생성된 직사각형과 중첩되는 경우, true를 반환하는
		overlap(const Rectangle2d& r) 상수 함수
	클래스에 대함 UML 다이어그램을 그리고, 클래스를 구현하라.
	3개의 Rectangle2D객체 r1(2,2,5.5,4.9) r2(5,5,10.5,3.5)
	, r3(3, 5, 2.3, 5.4)를 생성하고, r1의 면적과 둘레를 화면에 출력하며
	r1.contains(3,3), r1.contains(r2), r1.overlaps(r3)의 결과를
	화면에 출력하는 체스트 프로그램을 작성하라.

*/
//
//class Rectangle2D
//{
//private:
//	double x;
//	double y;
//	double width;
//	double height;
//public:
//	Rectangle2D();
//	Rectangle2D(double x, double y, double width, double height);
//	double getx() const;
//	double gety() const;
//	double getwidth() const;
//	double getheight() const;
//	double getArea() const;
//	double getPerimeter() const;
//	bool contains(double x, double y) const;
//	bool contains(const Rectangle2D & r) const;
//	bool overlaps(const Rectangle2D& r) const;
//
//};
//
//Rectangle2D::Rectangle2D()
//	: x(0), y(0), width(1), height(1) {}
//
//Rectangle2D::Rectangle2D(double x, double y, double width, double height)
//	: x(x), y(y), width(width), height(height) {}
//
//double Rectangle2D::getx() const
//{
//	return x;
//}
//
//double Rectangle2D::gety() const
//{
//	return y;
//}
//
//double Rectangle2D::getwidth() const
//{
//	return width;
//}
//
//double Rectangle2D::getheight() const
//{
//	return height;
//}
//
//double Rectangle2D::getArea() const
//{
//	return width * height;
//}
//
//double Rectangle2D::getPerimeter() const
//{
//	return 2 *(width + height);
//}
//
//bool Rectangle2D::contains(double x, double y) const
//{
//	double hx = width / 2.0;
//	double hy = height / 2.0;
//	if (x >= this->getx() - hx &&
//		x <= this->getx() + hx &&
//		y >= this->gety() - hy &&
//		y <= this->gety() + hy)
//		return true;
//	else
//		return false;
//}
//
//bool Rectangle2D::contains(const Rectangle2D & r) const
//{
//	double hx = width / 2.0;
//	double hy = height / 2.0;
//	double hrx = r.getwidth() / 2.0;
//	double hry = r.getheight() / 2.0;
//	if ((r.getx() - hrx) >= (x - hx) &&
//		(r.getx() + hrx) <= x + hx &&
//		(r.gety() - hry) >= (y - hy) &&
//		(r.gety() + hry) <= (y + hy))
//		return true;
//	else
//		return false;
//}
//
//bool Rectangle2D::overlaps(const Rectangle2D & r) const
//{
//	double hx = width / 2.0;
//	double hy = height / 2.0;
//	double hrx = r.getwidth() / 2.0;
//	double hry = r.getheight() / 2.0;
//	if ((r.getx() + hrx) >= (x - hx) && 
//		(r.getx() - hrx) <= x + hx &&
//		(r.gety() + hry) >= (y - hy) &&
//		(r.gety() - hry) <= (y + hy))
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	Rectangle2D r1(2, 2, 5.5, 4.9), r2(5, 5, 10.5, 3.5)
//		, r3(3, 5, 2.3, 5.4);
//
//
//
//	cout << "r1의 면적" << r1.getArea() << endl;
//	cout << "r1의 둘레" << r1.getPerimeter() << endl;
//
//	if (r1.contains(3, 3))
//		cout << "(3,3)은 r1에 포함된다.\n";
//	else
//		cout << "(3,3)은 r1에 포함되지 않는다.\n";
//
//	if (r1.contains(r2))
//		cout << "r2은 r1에 포함된다.\n";
//	else
//		cout << "r2은 r1에 포함되지 않는다.\n";
//
//	if (r1.overlaps(r3))
//		cout << "r3는 r1과 겹친다.\n";
//	else
//		cout << "r3는 r1과 겹치지 않는다.\n";
//
//
//
//	return 0;
//}
//
//void  callme1(StringBad &);
//void  callme2(StringBad);
//
//int main()
//{
//	{
//		cout << "내부 블록을 시작한다.\n";
//		StringBad headline1("Celery Stalks at midnight"); // 1
//		StringBad headline2("Lettuce Prey"); // 2
//		StringBad sports("Spanach Leaves Bowl for Dollars"); // 3
//		cout << "headline1: " << headline1 << endl;
//		cout << "headline2: " << headline2 << endl;
//		cout << "sports: " << sports << endl;
//		callme1(headline1);
//		cout << "headline1: " << headline1 << endl;
//		callme2(headline2); // 4 3
//		cout << "headlin2: " << headline2 << endl;
//		cout << "하나의 객체를 다른 객체로 초기화:\n";
//		StringBad sailor = sports; // 5
//		cout << "sailor: " << sailor << endl;
//		cout << "하나의 객체를 다른 객체에 대립:\n";
////		StringBad knot;
////		knot = headline1; // 6
////		cout << "knot: " << knot << endl;
//		cout << "이 블록을 빠져나온다." << endl;
//	}
//
//	cout << "main() 의 끝" << endl;
//
//
//
//	return 0;
//
//}
//
//void  callme1(StringBad & rsb)
//{
//	cout << "참조로 전달된 StringBad: " << endl;
//	cout << "        \"" << rsb << "\"\n";
//}
//void  callme2(StringBad sb)
//{
//	cout << "값으로 전달된 StringBad: " << endl;
//	cout << "        \"" << sb << "\"\n";
//}

const int MAX = 987654321;
int n;
vector<int> a, b, c;
void hanoi(int pre);
void show();
void move(vector<int> &v1, vector<int> &v2);
bool can_move(const vector<int> &v1, const vector<int> &v2, const vector<int> &v3);

int main()
{
	cout << "원반 최대 크기(0:exit) : ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		a.insert(a.end(), i);

	cout << b.size() << endl;

	show();
	hanoi(2);


	return 0;

}

void hanoi(int pre)
{
	if (n == 0)
		return;

	if (c.size() == n)
		return;
	
	vector<int> *pl, *pr;
	int ta = MAX, tb = MAX, tc = MAX;

	if (pre == 0)
	{
		if (!b.empty())
			tb = b.front();

		if (!c.empty())
			tc = c.front();

		if (tb < tc)
		{
			if (b.size() % 2)
			{
				move(b, c);
				pre = 2;
			}
			else
			{
				move(b, a);
				pre = 0;
			}
		}
		else
		{
			if (c.size() % 2)
			{
				move(c, b);
				pre = 1;
			}
			else
			{
				move(c, a);
				pre = 0;
			}
		}
	}
	else if (pre == 1)
	{
		if (!a.empty())
			ta = a.front();

		if (!c.empty())
			tc = c.front();

		if (ta < tc)
		{
			if (a.size() % 2)
			{
				move(a, c);
				pre = 2;
			}
			else
			{
				move(a, b);
				pre = 1;
			}
		}
		else
		{
			if (c.size() % 2)
			{
				move(c, b);
				pre = 1;
			}
			else
			{
				move(c, a);
				pre = 0;
			}
		}
	}
	else
	{
		if (!a.empty())
			ta = a.front();

		if (!b.empty())
			tb = b.front();

		if (ta < tb)
		{
			if (a.size() % 2)
			{
				move(a, c);
				pre = 2;
			}
			else
			{
				move(a, b);
				pre = 1;
			}
		}
		else
		{
			if (b.size() % 2)
			{
				move(b, c);
				pre = 2;
			}
			else
			{
				move(b, a);
				pre = 0;
			}
		}
	}

	show();
	hanoi(pre);

	return;

}


void show()
{
	for (int i = 0; i < n; i++)
	{
		int asize = a.size(), bsize = b.size(), csize = c.size();
		cout << "\t\t[";
		if (asize < n - i)
			cout << " ";
		else
		{
			cout << a[asize - (n-i)];
		}
		cout << "]\t";
		cout << "[";
		if (b.size() < n - i)
			cout << " ";
		else
		{
			cout << b[bsize - (n - i)];
		}
		cout << "]\t";
		cout << "[";
		if (c.size() < n - i)
			cout << " ";
		else
		{
			cout << c[csize - (n - i)];
		}
		cout << "]\t\n";
	}

	cout << "\t\t A \t B \t C \n"
		<< "\t\t-------------------\n";
}

void move(vector<int> &v1, vector<int> &v2)
{
	v2.insert(v2.begin(), v1[0]);
	v1.erase(v1.begin());
}


bool can_move(const vector<int> &v1, const vector<int> &v2, const vector<int> &v3)
{
	if (v2.empty() || v3.empty() || v1[0] < v2[0] || v1[0] < v3[0])
		return true;
}