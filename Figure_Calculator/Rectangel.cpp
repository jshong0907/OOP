#include "Rectangel.h"



Rectangel::Rectangel(float _bottom_side, float _side)
{
	bottom_side = _bottom_side;
	side = _side;
}


Rectangel::~Rectangel()
{
}

double Rectangel::area()
{
	double area = bottom_side * side;
	return area;
}

double Rectangel::circumference()
{
	float circumference = bottom_side * 2 + side * 2;
	return circumference;
}
