#include "Template_Cal.h"
#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

int main()
{
	Template_Cal<string> str;
	Template_Cal<int> int_cal;
	int_cal.plus(3, 4);
	cout <<str.plus("ab", "cd");
	system("pause");
}