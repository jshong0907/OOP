#include "Calculator.h"



Fraction Calculator::addition(Fraction a, Fraction b)
{
	Fraction c(a.get_son()*b.get_mother() + a.get_mother()*b.get_son(), a.get_mother()*b.get_mother());
	c.Simple_Fraction();
	return c;
}

Fraction Calculator::subtraction(Fraction a, Fraction b)
{
	Fraction c(a.get_son()*b.get_mother() - a.get_mother()*b.get_son(), a.get_mother()*b.get_mother());
	c.Simple_Fraction();
	return c;
}

Fraction Calculator::multiplication(Fraction a, Fraction b)
{
	Fraction c(a.get_son()*b.get_son(), a.get_mother()*b.get_mother());
	c.Simple_Fraction();
	return c;
}

Fraction Calculator::division(Fraction a, Fraction b)
{
	Fraction c(a.get_son()*b.get_mother(), a.get_mother()*b.get_son());
	c.Simple_Fraction();
	return c;
}


Calculator::Calculator()
{
}


Calculator::~Calculator()
{
}
