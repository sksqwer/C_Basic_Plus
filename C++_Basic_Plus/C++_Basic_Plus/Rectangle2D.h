#pragma once
#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H
class Rectangle2D
{
private:
	double x;
	double y;
	double width;
	double height;
public:
	Rectangle2D();
	Rectangle2D(double x, double y, double width, double height);
	double getx() const;
	double gety() const;
	double getwidth() const;
	double getheight() const;
	double getArea() const;
	double getPerimeter() const;
	bool contains(double x, double y) const;
	bool contains(const Rectangle2D & r) const;
	bool overlaps(const Rectangle2D& r) const;

};

#endif