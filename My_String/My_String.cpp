#include "My_String.h"



My_String::My_String(char _str)
{
	str = _str;
}


My_String::~My_String()
{
}

My_String My_String::operator+(const My_String & other)
{
	return My_String(str + other.str);
}

void My_String::operator*(int num)
{
	str *= num;
}
