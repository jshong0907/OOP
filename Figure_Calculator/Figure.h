#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
class Figure
{
public:
	Figure();
	~Figure();
	double virtual area() = 0;
	double virtual circumference() = 0;
private:
};

