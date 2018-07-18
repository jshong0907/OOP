#include "Regualr_Triangle.h"

Regualr_Triangle::Regualr_Triangle(float _side)
{
	side = _side;
}

Regualr_Triangle::~Regualr_Triangle()
{
}

double Regualr_Triangle::area()
{
	double area = floor(pow(side, 2) * pow(3, 1 / 2) / 4 * 100) / 100;
	return area;
}

double Regualr_Triangle::circumference()
{
	double circumference = 3 * side;
	return circumference;
}
