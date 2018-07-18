#pragma once
#include "Figure.h"
class Rectangel
	:public Figure
{
public:
	Rectangel(float bottom_side, float side);
	~Rectangel();
	double virtual area();
	double virtual circumference();
private:
	float bottom_side;
	float side;
};

