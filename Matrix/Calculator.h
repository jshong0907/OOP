#pragma once
#include"Matrix.h"
class Calculator
{
public:
	Calculator();
	~Calculator();

	Matrix addition(Matrix a, Matrix b);
	Matrix minus(Matrix a, Matrix b);
	Matrix multiplication(Matrix a, Matrix b);
private:

};

