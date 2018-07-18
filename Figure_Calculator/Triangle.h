#pragma once
#include "Figure.h"
class Triangle
	:public Figure
{
public:
	Triangle(float side1, float side2, float side3);
	~Triangle();
	double virtual area();
	double virtual circumference();
private:
	float side1;
	float side2;
	float side3;
};

