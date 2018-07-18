#include "Fraction.h"

Fraction::~Fraction()
{
}


Fraction::Fraction(int _son, int _mother)
{
	son = _son;
	mother = _mother;
}

void Fraction::print_Fraction()
{
	cout << son << "/" << mother;
}

void Fraction::Simple_Fraction()
{
	int gcd = Greatest_Common_Divisor();
	son = son / gcd;
	mother = mother / gcd;
}

int Fraction::Greatest_Common_Divisor()
{
	int Maximum = 1;
	for (int i = 1; i <= min(son, mother); i++)
	{
		if (son % i == 0 && mother % i == 0)
			Maximum = i;
	}
	return Maximum;
}
