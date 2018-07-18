#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;
class Matrix
{
public:
	Matrix(int _row,int _col);
	Matrix(Matrix & others);
	~Matrix();
	void made_Matrix();
	void print_Matrix();
	int get_row() { int rep; rep = row; return rep; }
	int get_col() { int rep; rep = col; return rep; }
	int** get_mat() { int** rep; rep = mat; return rep; }
	void set_mat(int** rep) { mat = rep; }

private:
	int row;
	int col;
	int** mat;
};

