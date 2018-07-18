#include "Matrix.h"



Matrix::Matrix(int _row, int _col)
{
	row = _row;
	col = _col;
	mat = new int*[row];
	for (int i = 0; i < row; i++)
		mat[i] = new int[col];
}

Matrix::Matrix(Matrix & others)
{
	row = others.row;
	col = others.col;
	mat = new int*[row];
	for (int i = 0; i < row; i++)
	{
		mat[i] = new int[col];
		for (int j = 0; j < col; j++)
			mat[i][j] = others.mat[i][j];
	}
}



Matrix::~Matrix()
{
	for (int i = 0; i < row; i++)
		delete[] mat[i];
	delete[] mat;
}

void Matrix::made_Matrix()
{
	int input;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "ют╥б::";
			cin >> input;
			mat[i][j] = input;
		}
	}
}

void Matrix::print_Matrix()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}
