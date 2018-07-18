#pragma once
#include <iostream>
#include <algorithm>  
#include <windows.h>
using namespace std;
class Fraction
{
public:
	Fraction(int _son, int _mother);
	~Fraction();
	void print_Fraction();
	void Simple_Fraction();
	int Greatest_Common_Divisor();
	void set_son(int num) { son = num; }
	void set_mother(int num) { mother = num; }
	int get_son() { return son; }
	int get_mother() { return mother; }
	
private:
	int son;
	int mother;
};

