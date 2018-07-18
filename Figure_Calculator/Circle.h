#pragma once
#include "Figure.h"

class Circle
	:public Figure
{
public:
	Circle(float radius);
	~Circle();
	double virtual area();
	double virtual circumference();
private:
	float radius;
};

