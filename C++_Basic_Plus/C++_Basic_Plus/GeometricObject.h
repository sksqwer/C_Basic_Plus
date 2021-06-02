#pragma once
#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H

class GeometricObject2D
{
private:
	double x;
	double y;
public:
	GeometricObject2D();
	GeometricObject2D(double x, double y);
	double getx() const;
	double gety() const;
	void setx(double);
	void sety(double);
	double distance(GeometricObject2D) const;
	virtual double getArea() const;
	virtual double getPerimeter() const;
};

class Circle2D : public GeometricObject2D
{
private:
	double radius;
public:
	Circle2D();
	Circle2D(double x, double y, double r);
	double getradius() const;
	void setradius(double radius);
	bool contains(double x, double y)const;
	bool contains(const Circle2D & circle)const;
	bool overlaps(const Circle2D & circle)const;
	virtual double getArea() const;
	virtual double getPerimeter() const;
};

class Rectangle2D : public GeometricObject2D
{
private:
	double width;
	double height;
public:
	Rectangle2D();
	Rectangle2D(double x, double y, double width, double height);
	double getwidth() const;
	double getheight() const;
	bool contains(double x, double y) const;
	bool contains(const Rectangle2D & r) const;
	bool overlaps(const Rectangle2D& r) const;
	virtual double getArea() const;
	virtual double getPerimeter() const;
};

class Triangle2D : public GeometricObject2D
{
private:
	double radius;
public:
	Triangle2D();
	Triangle2D(double x, double y, double radius);
	bool contains(double x, double y) const;
	bool contains(const Triangle2D & r) const;
	bool overlaps(const Triangle2D& r) const;
	virtual double getArea() const;
	virtual double getPerimeter() const;
};

class MyPoint : public GeometricObject2D
{
public:
	MyPoint();
	MyPoint(double x, double y);
	bool isIn(Circle2D &);
	bool isIn(Rectangle2D &);
};



#endif // GEOMETRICOBJECT_H