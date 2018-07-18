#include "Calculator.h"



Calculator::Calculator()
{
}


Calculator::~Calculator()
{
}

Matrix Calculator::addition(Matrix a, Matrix b)
{
	int** mat1;
	int** mat2;
	int** mat3;
	mat1 = a.get_mat();
	mat2 = b.get_mat();
	Matrix added_mat(a.get_row(), a.get_col());
	if (a.get_row() == b.get_row() && a.get_col() == b.get_col())
	{
		mat3 = new int*[a.get_row()];
		for (int i = 0; i < a.get_row(); i++)
			mat3[i] = new int[a.get_col()];
		for (int i = 0; i < a.get_row(); i++)
		{
			for (int j = 0; j < a.get_col(); j++)
			{
				mat3[i][j] = mat1[i][j] + mat2[i][j];
			}
		}
		added_mat.set_mat(mat3);
	}
	else
	{
		cout << "µ¡¼ÀºÒ°¡!!!!!!!!!!";
		exit(0);
	}
	return added_mat;
}

Matrix Calculator::minus(Matrix a, Matrix b)
{
	int** mat1;
	int** mat2;
	int** mat3;
	mat1 = a.get_mat();
	mat2 = b.get_mat();
	Matrix substracted_mat(a.get_row(), a.get_col());
	if (a.get_row() == b.get_row() && a.get_col() == b.get_col())
	{
		mat3 = new int*[a.get_row()];
		for (int i = 0; i < a.get_row(); i++)
			mat3[i] = new int[a.get_col()];
		for (int i = 0; i < a.get_row(); i++)
		{
			for (int j = 0; j < a.get_col(); j++)
			{
				mat3[i][j] = mat1[i][j] - mat2[i][j];
			}
		}
		substracted_mat.set_mat(mat3);
	}
	else
	{
		cout << "»¬¼ÀºÒ°¡!!!!!!!!!!";
		exit(0);
	}
	return substracted_mat;
}

Matrix Calculator::multiplication(Matrix a, Matrix b)
{
	int** mat1;
	int** mat2;
	int** mat3;
	mat1 = a.get_mat();
	mat2 = b.get_mat();
	Matrix multiplicated_mat(a.get_row(), b.get_col());
	if (a.get_col() == b.get_row())
	{
		mat3 = new int*[a.get_row()];
		for (int i = 0; i < a.get_row(); i++)
			mat3[i] = new int[b.get_col()];
		for (int i = 0; i < a.get_row(); i++)
			for (int j = 0; j < b.get_col(); j++)
				mat3[i][j] = 0;

		for (int i = 0; i < a.get_row(); i++)
		{
			for (int j = 0; j < b.get_col(); j++)
			{
				for (int k = 0; k < a.get_col(); k++)
				{
					mat3[i][j] += mat1[i][k] * mat2[k][j];
				}
			}
		}
		multiplicated_mat.set_mat(mat3);
	}
	else
	{
		cout << "»¬¼ÀºÒ°¡!!!!!!!!!!";
		exit(0);
	}
	return multiplicated_mat;
}

