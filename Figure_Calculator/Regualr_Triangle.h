#pragma once
#include "Figure.h"
class Regualr_Triangle
	:public Figure
{
public:
	Regualr_Triangle(float side);
	~Regualr_Triangle();
	double virtual area();
	double virtual circumference();
private:
	float side;
};

