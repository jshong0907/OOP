#include "Matrix.h"
#include "Calculator.h"
void menu()
{
	cout << "1번 행렬의 크기를 입력하시오(행 열 순서)::";
	int row, col;
	cin >> row >> col;
	Matrix matrix1(row, col);
	cout << endl;
	cout << row * col << "개의 행렬의 요소를 입력하시오\n";
	matrix1.made_Matrix();

	cout << "2번 행렬의 크기를 입력하시오(행 열 순서)::";
	cin >> row >> col;
	Matrix matrix2(row, col);
	cout << endl;
	cout << row * col << "개의 행렬의 요소를 입력하시오\n";
	matrix2.made_Matrix();

	system("cls");

	cout << "1번행렬" << endl;
	matrix1.print_Matrix();
	cout << "2번행렬" << endl;
	matrix2.print_Matrix();

	cout << "______________________________________________\n";
	cout << "\n1. 덧셈\n2. 뺄셈\n3. 곱셈\n0. 종료\n";
	cout << "______________________________________________\n";
	cout << "입력 :: ";


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
