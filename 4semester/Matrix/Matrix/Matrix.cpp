#include <iostream>
#include "Matrix.h";

Matrix::Matrix() {
	row = 2;
	col = 2;
	mat = new int* [col];
	for (int i = 0; i < col; i++)
		mat[i] = new int[row];

	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			i == j ? mat[i][j] = 1 : mat[i][j] = 0;
		}
	}
}

Matrix::Matrix(int c, int r, int** d) {
	row = r;
	col = c;
	mat = new int* [c];
	for (int i = 0; i < c; i++)
		mat[i] = new int[r];

	for (int i = 0; i < c; i++)
		for (int j = 0; j < r; j++)
			mat[i][j] = d[i][j];
}

Matrix::Matrix(const Matrix& m) {
	this->row = m.row;
	this->col = m.col;

	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			this->mat[i][j] = m.mat[i][j];
		}
	}
	//this->mat = m.mat;
}

Matrix::~Matrix() {
	for (int i = 0; i < col; i++)
		delete[] mat[i];
	delete[] mat;
}

void Matrix::out() {

	for (int i = 0; i < col; i++) {

		for (int j = 0; j < row; j++) {
			cout << mat[i][j] << ' ';
		}
		cout << '\n';
	}
}

ostream& operator<<(ostream& out, const Matrix& m) {
	for (int i = 0; i < m.col; i++) {
		for (int j = 0; j < m.row; j++) {
			out << m.mat[i][j] << " ";
		}
		out << '\n';
	}
	return out;
}


Matrix& Matrix::operator+=(const Matrix& m) {
	//if (row == m.row && col == m.col) {
		for (int i = 0; i < col; i++) {
			for (int j = 0; j < row; j++) {
				mat[i][j] += m.mat[i][j];
			}
		}
		return *this;
	/*}
	else {

		cout << "incorrect matrixs";

		int** er = new int* [1];
		er[0] = new int[1];
		er[0][0] = -1;
		Matrix m(1, 1, er);
		return m;
	}*/
}

Matrix Matrix::operator+(const Matrix& m) const {
	Matrix res(*this);
	return res += m;
}

Matrix& Matrix::operator-=(const Matrix& m) {
	//if (row == m.row && col == m.col) {
		for (int i = 0; i < col; i++) {
			for (int j = 0; j < row; j++) {
				mat[i][j] -= m.mat[i][j];
			}
		}
		return *this;
	/*}
	else {

		cout << "incorrect matrixs";

		int** er = new int* [1];
		er[0] = new int[1];
		er[0][0] = -1;
		Matrix m(1, 1, er);
		return m;
	}*/
}

Matrix Matrix::operator-(const Matrix& m) const {
	Matrix res(*this);
	return res -= m;
}

//Matrix Matrix::operator *(const Matrix& m) const {
//	if (this->col == m.col && this->row == m.col) {
//		Matrix res(this->col)
//		for (int i = 0; i < this->col; i++) {
//			for (int j = 0; j < this->row; j++) {
//
//			}
//		}
//	}
//}
