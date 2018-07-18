#include "Fraction.h"
#include "Calculator.h"
void menu()
{
	cout << "1번 분수를 입력하시오(분자 분모 순서)::";
	int num1, num2;
	cin >> num1;
	cin >> num2;
	Fraction fraction1(num1, num2);
	fraction1.Simple_Fraction();
	cout << endl;
	cout << "2번 분수를 입력하시오(분자 분모 순서)::";
	int num3, num4;
	cin >> num3;
	cin >> num4;
	Fraction fraction2(num3, num4);
	fraction2.Simple_Fraction();

	system("cls");

	cout << "1번 분수 :: ";
	fraction1.print_Fraction();
	cout << "\n2번 분수 :: ";
	fraction2.print_Fraction();

	cout << endl;

	for (int i = 0; i < 44; i++)
		cout << "_";
	cout << endl;
	cout << "1. 덧셈\n2. 뺄셈\n3. 곱셈\n4. 나눗셈\n0. 종료\n";

	for (int i = 0; i < 44; i++)
		cout << "_";
	cout << endl;
	cout << "입력 :: ";
	int choice;
	cin >> choice;
	
	Calculator calculator;

	if (choice == 0)
	{
		exit(0);
	}
	else if (choice == 1)
	{
		calculator.addition(fraction1, fraction2).print_Fraction();
		system("pause");
	}
	else if (choice == 2)
	{
		calculator.subtraction(fraction1, fraction2).print_Fraction();
		system("pause");
	}
	else if (choice == 3)
	{
		calculator.multiplication(fraction1, fraction2).print_Fraction();
		system("pause");
	}
	else if (choice == 4)
	{
		calculator.division(fraction1, fraction2).print_Fraction();
		system("pause");
	}
}

int main()
{
	menu();
}