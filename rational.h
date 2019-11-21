#pragma once

#include <iostream>

using namespace std;

class Rational {
public:
		int numer;
		int denom;

		Rational();
		Rational(int n);
		Rational(int n, int d);
		Rational c(const Rational&);
		void simplify();

		Rational& operator +=(const Rational& r);
		Rational operator +(const Rational& r) const;
		Rational operator -() const;
		Rational& operator -=(const Rational& r);
		Rational operator -(const Rational& r) const;

		Rational& operator *= (const Rational& r);
		Rational operator *(const Rational& r) const;

		Rational& operator /= (const Rational& r);
		Rational operator / (const Rational& r) const;
		
		Rational sqrt(Rational r);
		Rational operator ^(Rational r) const ;

		Rational& operator ++();
		Rational operator ++(int);

		bool operator ==(const Rational& r) const;
		bool operator !=(const Rational& r) const;
		
		bool operator > (const Rational& r) const;
		bool operator >= (const Rational& r) const;
		bool operator < (const Rational& r) const;
		bool operator <= (const Rational& r) const;
		
		operator int() const;
		operator double() const;

		friend istream& operator >>(istream& in, Rational& r);
		friend ostream& operator <<(ostream& out, const Rational& r);
};