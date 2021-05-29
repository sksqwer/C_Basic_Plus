

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
��1
	������ �����ϴ� Circle2D�� �����϶�.
	- ���� �߽��� ��Ÿ���� x�� y��� �ΰ��� double ������ �ʵ��
		get ��� �Լ�
	- double ������ �ʵ� radius �� get ��� �Լ�
	- (x,y) �� (0,0), radius�� 1�� �⺻ ���� �����ϴ� �μ� ���� ������
	-������ x,y,radius�� ���� �����ϴ� ������.
	- ���� ������ ��ȯ�ϴ� getArea() ��� �Լ�
	- ���� �ѷ��� ��ȯ�ϴ� getPerimeter() ��� �Լ�
	- ������ ��(x,y)�� ������ �� ���ο� ���� ���,
		true�� ��ȯ�ϴ� contains(double x, double y)��� �Լ�
	- ������ ���� ������ �� ���ο� ���� ���,
		true�� ��ȯ�ϴ� contains(const Circle2D& circle) ��� �Լ�
	- ������ ���� ������ ���� ��ø�Ǵ� ���,
		true�� ��ȯ�ϴ� overlap(const Circle2d& circle) ��� �Լ�
	- Ŭ������ ���� UML���̾�׷��� �׸���, Ŭ������ �����϶�.

	Circle2D��ü c1(2, 2, 5.5), c2(2, 2, 5.5), c3(4, 5, 10,5)�� �����ϰ�
		c1�� ������ �ѷ�,
		c1.contatins(3,3), c1.contains(c2), c1.overlaps(c3)�� �����
		ȭ�鿡 ����ϴ� �׽�Ʈ ���α׷��� �ۼ��϶�
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
//	cout << "c1�� ����" << c1.getarea() << endl;
//	cout << "c1�� �ѷ�" << c1.getPerimeter() << endl;
//
//	if (c1.contains(3, 3))
//		cout << "(3,3)�� c1�� ���Եȴ�.\n";
//	else
//		cout << "(3,3)�� c1�� ���Ե��� �ʴ´�.\n";
//
//	if (c1.contains(c2))
//		cout << "c2�� c1�� ���Եȴ�.\n";
//	else
//		cout << "c2�� c1�� ���Ե��� �ʴ´�.\n";
//
//	if (c1.overlaps(c3))
//		cout << "c3�� c1�� ��ģ��.\n";
//	else
//		cout << "c3�� c1�� ��ġ�� �ʴ´�.\n";
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
��2 
	������ �����ϴ� Rectangle2DŬ������ �����϶�.
	- ���簢���� �߽��� ��Ÿ���� x, y��� �� ���� double ������ �ʵ�, 
		�̿����� get ��� �Լ��� set �Լ�, �簢���� ���� x��� y�࿡ 
		������ ������ �����Ѵ�.
	- double ������ �ʵ� width�� heigh, �̿� ���� get, set ��� �Լ�
	- (x,y)�� (0,0), width�� height�� ��� 1�� �⺻ ���簢���� �����ϴ�
		�μ����� ������.
	- ������ x,y,width, height�� ���簢���� �����ϴ� ������
	- ���簢���� ������ ��ȯ�ϴ� getArea() ����Լ�
	- ���簢���� �ѷ��� ��ȯ�ϴ� get Perimeter() ��� �Լ�
	- ������ ��(x,y)�� ������ ���簢�� ���ο� ���� ���, true�� ��ȯ�ϴ�
		contains(double x, double y) ��� �Լ�
	- ������ ���簢���� ������ ���簢�� ���ο� ���� ���, true�� ��ȯ�ϴ�
		contains(const Rectangle2D& r) ��� �Լ�
	- ������ ���簢���� ������ ���簢���� ��ø�Ǵ� ���, true�� ��ȯ�ϴ�
		overlap(const Rectangle2d& r) ��� �Լ�
	Ŭ������ ���� UML ���̾�׷��� �׸���, Ŭ������ �����϶�.
	3���� Rectangle2D��ü r1(2,2,5.5,4.9) r2(5,5,10.5,3.5)
	, r3(3, 5, 2.3, 5.4)�� �����ϰ�, r1�� ������ �ѷ��� ȭ�鿡 ����ϸ�
	r1.contains(3,3), r1.contains(r2), r1.overlaps(r3)�� �����
	ȭ�鿡 ����ϴ� ü��Ʈ ���α׷��� �ۼ��϶�.

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
//	cout << "r1�� ����" << r1.getArea() << endl;
//	cout << "r1�� �ѷ�" << r1.getPerimeter() << endl;
//
//	if (r1.contains(3, 3))
//		cout << "(3,3)�� r1�� ���Եȴ�.\n";
//	else
//		cout << "(3,3)�� r1�� ���Ե��� �ʴ´�.\n";
//
//	if (r1.contains(r2))
//		cout << "r2�� r1�� ���Եȴ�.\n";
//	else
//		cout << "r2�� r1�� ���Ե��� �ʴ´�.\n";
//
//	if (r1.overlaps(r3))
//		cout << "r3�� r1�� ��ģ��.\n";
//	else
//		cout << "r3�� r1�� ��ġ�� �ʴ´�.\n";
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
//		cout << "���� ����� �����Ѵ�.\n";
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
//		cout << "�ϳ��� ��ü�� �ٸ� ��ü�� �ʱ�ȭ:\n";
//		StringBad sailor = sports; // 5
//		cout << "sailor: " << sailor << endl;
//		cout << "�ϳ��� ��ü�� �ٸ� ��ü�� �븳:\n";
////		StringBad knot;
////		knot = headline1; // 6
////		cout << "knot: " << knot << endl;
//		cout << "�� ����� �������´�." << endl;
//	}
//
//	cout << "main() �� ��" << endl;
//
//
//
//	return 0;
//
//}
//
//void  callme1(StringBad & rsb)
//{
//	cout << "������ ���޵� StringBad: " << endl;
//	cout << "        \"" << rsb << "\"\n";
//}
//void  callme2(StringBad sb)
//{
//	cout << "������ ���޵� StringBad: " << endl;
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
	cout << "���� �ִ� ũ��(0:exit) : ";
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