#include "Square.h"



Square::Square(float _side)
{
	side = _side;
}


Square::~Square()
{
}

double Square::area()
{
	double area = pow(side, 2);
	return area;
}

double Square::circumference()
{
	double circumference = 4 * side;
	return circumference;
}
