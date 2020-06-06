#pragma once
#include <iostream>
using namespace std;

class Matrix {
	int col;
	int row;
	int** mat;

public:

	//constructors
	Matrix();//+
	Matrix(int r, int c, int** d);//+
	Matrix(const Matrix&m);

	~Matrix();//+

	Matrix& operator +=(const Matrix& m);//+
	Matrix operator +(const Matrix& m) const;
	Matrix& operator -=(const Matrix& m);//+
	Matrix operator -(const Matrix& m) const;
	Matrix operator *(const Matrix& m) const;

	int det();
	Matrix inv();
	void out();//+

	friend ostream& operator <<(ostream& out, const Matrix& m);//+

};