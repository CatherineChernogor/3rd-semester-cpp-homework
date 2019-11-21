#include "pch.h"
#include "rational.h"
#include <iostream>

using namespace std;

int main()
{
	
	int a1, a2;
	char str;

	while (true){
		cout <<endl<< "enter first number" << endl;
		cin >> a1 >> a2;
		Rational a(a1, a2);

		cin >> str;

		cout << "enter second number" << endl;
		cin >> a1 >> a2;
		Rational b(a1, a2);


		if (a1 == 0 and a2 == 0) 
			break;


		if (str == '+') 
			cout << "a=" << a << " b=" << b << " a+b=" << a + b << endl;
		if (str == '-')
			cout << "a=" << a << " b=" << b << " a-b=" << a - b << endl;
		if (str == '*')
			cout << "a=" << a << " b=" << b << " a*b=" << a * b << endl;
		if (str == '/')
			cout << "a=" << a << " b=" << b << " a/b=" << a / b << endl;
		if (str == '>') {
			cout << "a=" << a << " b=" << b << " a>b ";
			a > b ? cout << 'y' : cout << 'n';
			cout << endl;
		}

		if (str == '<') {
			cout << "a=" << a << " b=" << b << " a<b ";
			a < b ? cout << 'y' : cout << 'n';
			cout << endl;
		}
		/*
		if (str == '') {
			cout << "a=" << a << " b=" << b << " a>=b ";
			a >= b ? cout << 'y' : cout << 'n';
			cout << endl;
		}

		if (str == ''){
			cout << "a=" << a << " b=" << b << " a<=b ";
			a <= b ? cout << 'y' : cout << 'n';
			cout << endl;
		}*/

		
		if (str == '~') {
			cout << "a=" << a << " sqrt(a)= " << sqrt(a);
		}
		if (str == '^') {
			cout << "a=" << a << " a^b= " << a ^ b;
		}
	}
	
}
