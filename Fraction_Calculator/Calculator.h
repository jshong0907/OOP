#pragma once
#include "Fraction.h"

class Calculator
{
public:
	Fraction addition(Fraction a, Fraction b);
	Fraction subtraction(Fraction a, Fraction b);
	Fraction multiplication(Fraction a, Fraction b);
	Fraction division(Fraction a, Fraction b);

	Calculator();
	~Calculator();

private:

};

