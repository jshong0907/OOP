#include "Matrix.h"
#include "Calculator.h"
void menu()
{
	cout << "1�� ����� ũ�⸦ �Է��Ͻÿ�(�� �� ����)::";
	int row, col;
	cin >> row >> col;
	Matrix matrix1(row, col);
	cout << endl;
	cout << row * col << "���� ����� ��Ҹ� �Է��Ͻÿ�\n";
	matrix1.made_Matrix();

	cout << "2�� ����� ũ�⸦ �Է��Ͻÿ�(�� �� ����)::";
	cin >> row >> col;
	Matrix matrix2(row, col);
	cout << endl;
	cout << row * col << "���� ����� ��Ҹ� �Է��Ͻÿ�\n";
	matrix2.made_Matrix();

	system("cls");

	cout << "1�����" << endl;
	matrix1.print_Matrix();
	cout << "2�����" << endl;
	matrix2.print_Matrix();

	cout << "______________________________________________\n";
	cout << "\n1. ����\n2. ����\n3. ����\n0. ����\n";
	cout << "______________________________________________\n";
	cout << "�Է� :: ";


	Calculator calculator;
	int choice;
	cin >> choice;
	if (choice == 0)
		exit(0);
	if (choice == 1)
	{
		calculator.addition(matrix1, matrix2).print_Matrix();
	}
	if (choice == 2)
	{
		calculator.minus(matrix1, matrix2).print_Matrix();
	}
	if (choice == 3)
	{
		calculator.multiplication(matrix1, matrix2).print_Matrix();
	}
}
int main()
{
	menu();
	system("pause");
}
