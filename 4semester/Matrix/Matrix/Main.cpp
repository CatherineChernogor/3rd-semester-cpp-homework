#include <iostream>
#include "Matrix.h";

using namespace std;

int main()
{
	cout << "Hello World!\n";
	int r = 2, c = 2;
	int** m = new int* [c];
	for (int i = 0; i < c; i++)
		m[i] = new int[r];

	for (int i = 0; i < c; i++)
		for (int j = 0; j < r; j++)
			m[i][j] = i * j;

	Matrix m2;
	Matrix m1(c, r, m);

	cout << m1 << '\n' << m2 << '\n';
	cout << m2 + m1 << '\n';
	cout << m2 - m1 << '\n';

}
