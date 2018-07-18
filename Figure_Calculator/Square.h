#pragma once
#include "Figure.h"
class Square
	:public Figure
{
public:
	Square(float side);
	~Square();
	double virtual area();
	double virtual circumference();
private:
	float side;
};

