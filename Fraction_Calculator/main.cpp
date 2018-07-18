#include "Fraction.h"
#include "Calculator.h"
void menu()
{
	cout << "1�� �м��� �Է��Ͻÿ�(���� �и� ����)::";
	int num1, num2;
	cin >> num1;
	cin >> num2;
	Fraction fraction1(num1, num2);
	fraction1.Simple_Fraction();
	cout << endl;
	cout << "2�� �м��� �Է��Ͻÿ�(���� �и� ����)::";
	int num3, num4;
	cin >> num3;
	cin >> num4;
	Fraction fraction2(num3, num4);
	fraction2.Simple_Fraction();

	system("cls");

	cout << "1�� �м� :: ";
	fraction1.print_Fraction();
	cout << "\n2�� �м� :: ";
	fraction2.print_Fraction();

	cout << endl;

	for (int i = 0; i < 44; i++)
		cout << "_";
	cout << endl;
	cout << "1. ����\n2. ����\n3. ����\n4. ������\n0. ����\n";

	for (int i = 0; i < 44; i++)
		cout << "_";
	cout << endl;
	cout << "�Է� :: ";
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