#pragma once
#include <iostream>
using namespace std;

class Rational {
    int numer;
    int denom;
    void simplify();
public:
    int rsqr(int a);
    Rational rsqrt();

    Rational();
    Rational(int n);
    Rational(int n, int d);
    Rational c(const Rational&);

    Rational& operator +=(const Rational& r);
    Rational operator +(const Rational& r) const;
    Rational operator -() const;
    Rational& operator -=(const Rational& r);
    Rational operator -(const Rational& r) const;

    Rational& operator *= (const Rational& r);
    Rational operator *(const Rational& r) const;

    Rational& operator /= (const Rational& r);
    Rational operator / (const Rational& r) const;

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