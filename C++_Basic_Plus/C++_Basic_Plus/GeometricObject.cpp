

#define _USE_MATH_DEFINES

#include <cmath>
#include "GeometricObject.h"

// GeometricObject2D
GeometricObject2D::GeometricObject2D()
{
	x = 0;
	y = 0;
}

GeometricObject2D::GeometricObject2D(double x, double y)
 : x(x), y(y) {}

double GeometricObject2D::getx() const
{
	return x;
}

double GeometricObject2D::gety() const
{
	return y;
}

void GeometricObject2D::setx(double x)
{
	this->x = x;
}

void GeometricObject2D::sety(double)
{
	this->y = y;
}
double GeometricObject2D::distance(GeometricObject2D d) const
{
	return sqrt(pow(x - d.getx(), 2) + pow(y - d.gety(), 2));
}

double GeometricObject2D::getArea() const
{
	return 0.0;
}

double GeometricObject2D::getPerimeter() const
{
	return 0.0;
}

//Circle
Circle2D::Circle2D()
	: radius(0), GeometricObject2D() {}
Circle2D::Circle2D(double x, double y, double r)
	: radius(r), GeometricObject2D(x, y) {}
double Circle2D::getradius() const
{
	return radius;
}
void Circle2D::setradius(double radius)
{
	this->radius = radius;
}
bool Circle2D::contains(double x, double y)const
{
	GeometricObject2D a(x, y);
	double d = this->distance(GeometricObject2D(x, y));
	if (radius >= d)
		return true;
	else
		return false;
}
bool Circle2D::contains(const Circle2D & circle)const
{
	double d = this->distance(GeometricObject2D(circle.getx(), circle.gety()));

	if (radius - circle.getradius() >= d)
		return true;
	else
		return false;
}
bool Circle2D::overlaps(const Circle2D & circle)const
{
	if (distance(GeometricObject2D(circle.getx(), circle.gety())) > (radius + circle.getradius()))
		return false;
	else
		return true;
}
double Circle2D::getArea() const
{
	return radius * radius * M_PI;
}
double Circle2D::getPerimeter() const
{
	return 2 * M_PI * radius;
}

//Rectnagle

Rectangle2D::Rectangle2D()
	: GeometricObject2D(0,0), width(1), height(1) {}
Rectangle2D::Rectangle2D(double x, double y, double width, double height)
	: GeometricObject2D(x, y), width(width), height(height) {}
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
	return 2 * (width + height);
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
	if ((r.getx() - hrx) >= (this->getx() - hx) &&
		(r.getx() + hrx) <= this->getx() + hx &&
		(r.gety() - hry) >= (this->gety() - hy) &&
		(r.gety() + hry) <= (this->gety() + hy))
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
	if ((r.getx() + hrx) >= (this->getx() - hx) &&
		(r.getx() - hrx) <= this->getx() + hx &&
		(r.gety() + hry) >= (this->gety() - hy) &&
		(r.gety() - hry) <= (this->gety() + hy))
		return true;
	else
		return false;
}

// Mypoint
MyPoint::MyPoint()
	: GeometricObject2D() {}
MyPoint::MyPoint(double x, double y)
	: GeometricObject2D(x, y) {}

bool MyPoint::isIn(Circle2D & c)
{
	return c.contains(this->getx(), this->gety());
}

bool MyPoint::isIn(Rectangle2D & r)
{
	return r.contains(this->getx(), this->gety());
}

// Triangle
Triangle2D::Triangle2D()
	: GeometricObject2D(), radius(0) {}

Triangle2D::Triangle2D(double x, double y, double radius)
	: GeometricObject2D(x,y), radius(radius) {}

bool Triangle2D::contains(double x, double y) const
{
	return false;
}

bool Triangle2D::contains(const Triangle2D & r) const
{
	return false;
}

bool Triangle2D::overlaps(const Triangle2D & r) const
{
	return false;
}

double Triangle2D::getArea() const
{
	return 3.0 * sqrt(3) / 2.0 * radius * radius;
}

double Triangle2D::getPerimeter() const
{
	return 3.0 * sqrt(3) * radius;
}
