#include "Circle.h"



Circle::Circle(float _radius)
{
	radius = _radius;
}


Circle::~Circle()
{
}

double Circle::area()
{
	double area;
	area = floor(pow(radius, 2) * M_PI * 100) / 100;
	return area;
}

double Circle::circumference()
{
	double circumference = floor(2 * M_PI * radius * 100) / 100;
	return circumference;
}
