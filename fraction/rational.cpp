#include <iostream>
#include "rational.h"

int Rational::rsqr(int a){
    int n = 0, x = 1;
    a=abs(a);
    while (n != x){
        n = a / x;
        if (n == x)
            return x;
        x++;
    }
}

Rational Rational::rsqrt() {
    Rational res(*this);
    res.simplify();
    res.denom = rsqr(res.denom);
    res.numer = rsqr(res.numer);
    return res;
}

void Rational::simplify() {
    int g = gcd(numer, denom);
    numer /= g;
    denom /= g;
}
int Rational::gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (a < b) {
        int buf = b;
        b = a;
        a = buf;
    }
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
Rational::Rational() {
	numer = 0;
	denom = 1;
}
Rational::Rational(int n) {
	numer = n;
	denom = 1;
}
Rational::Rational(int n, int d) {
	numer = n;
	denom = d;
}

Rational& Rational::operator +=(const Rational& r) {
	numer = numer * r.denom + denom * r.numer;
	denom *= r.denom;
	simplify();
	return *this;//������������� (�������� ������)
}
Rational Rational::operator +(const Rational &r) const {
	Rational res(*this);
	return res += r;
}

Rational Rational::operator -() const {
	Rational r(-numer, denom);
	return r;
}
Rational& Rational::operator -=(const Rational& r) {
	return (*this+=(-r));//������������� (�������� ������)
}
Rational Rational::operator -(const Rational &r) const {
	Rational res(*this);
	return res -= r;
}

Rational& Rational::operator *=(const Rational& r) {
	numer *=r.numer;
	denom *= r.denom;
	simplify();
	return *this;//������������� (�������� ������)
}
Rational Rational::operator *(const Rational &r) const {
	Rational res(*this);
	return res *= r;
}

Rational& Rational::operator /=(const Rational& r) {
	numer *= r.denom;
	denom *= r.numer;
	simplify();
	return *this;//������������� (�������� ������)
}
Rational Rational::operator /(const Rational &r) const {
	Rational res(*this);
	return res /= r;
}

Rational& Rational::operator ++() {
	numer += denom;
	return *this;
}
Rational Rational::operator ++ (int) {
	Rational r(*this);
	numer += denom;
	return r;
}

bool Rational::operator == (const Rational& r) const {
	return (numer == r.numer) && (denom == r.denom);
}
bool Rational::operator != (const Rational& r) const {
	return !(*this==r);
}

bool Rational::operator > (const Rational& r) const {
	return (numer*r.denom > r.numer*denom);
}
bool Rational::operator < (const Rational& r) const {
	return (numer*r.denom < r.numer*denom);
}
bool Rational::operator <= (const Rational& r) const {
	return !(numer*r.denom > r.numer*denom);
}
bool Rational::operator >= (const Rational& r) const {
	return !(numer*r.denom < r.numer*denom);
}

Rational::operator int() const {
	return numer / denom;
}

Rational::operator double() const {
    return (double) this->numer / (double) this->denom;
}

Rational Rational::operator + (int a) const {
    return *this + Rational(a);
}

Rational Rational::operator - (int a) const {
    return *this - Rational(a);
}

Rational Rational::operator * (int a) const {
    return *this * Rational(a);
}

Rational Rational::operator / (int a) const {
    return *this / Rational(a);
}

istream& operator >>(istream& in, Rational& r) {
    in >> r.numer >> r.denom;
    return in;
}
ostream& operator <<(ostream& out, const Rational& r) {
    out << r.numer << "/" << r.denom;
    return out;
}
