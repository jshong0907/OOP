#include "Triangle.h"




Triangle::Triangle(float _side1, float _side2, float _side3)
{
	side1 = _side1;
	side2 = _side2;
	side3 = _side3;
}

Triangle::~Triangle()
{
}

double Triangle::area()
{
	double s = (side1 + side2 + side3) / 2;
	double area = pow(s*(s - side1)*(s - side2)*(s - side3), 1 / 2);
	return area;
}

double Triangle::circumference()
{
	double circumference = side1 + side2 + side3;
	return circumference;
}
