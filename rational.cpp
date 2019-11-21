#include "pch.h"

#include "rational.h"
#include <iostream>

double sqrt(double a, int n)
{
	if (n == 0)
		return 0.5*(1 + a);

	double x = sqrt(a, n - 1);
	return 0.5*(x + a / x);
}

int pow(int base, int power)
{
	long long result = 1;
	while (power > 0) {

		if (power % 2 == 1) { // Can also use (power & 1) to make code even faster
			result = (result*base);
		}
		base = (base * base);
		power = power / 2; // Can also use power >>= 1; to make code even faster
	}
	return result;
	
}

void Rational::simplify() {
	if (denom < 0) {
		numer = -numer;
		denom = -denom;
	}
	for (int i = 2; i <= abs(denom) && i <= abs(numer); i++) {
		if (numer % i == 0 && denom % i == 0) {
			numer /= i;
			denom /= i;
			i--;
		}
	}
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
	return *this;//разыменование (получаем ссылку)
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
	return (*this+=(-r));//разименование (получаем ссылку)
}
Rational Rational::operator -(const Rational &r) const {
	Rational res(*this);
	return res -= r;
}

Rational& Rational::operator *=(const Rational& r) {
	numer *=r.numer;
	denom *= r.denom;
	simplify();
	return *this;//разыменование (получаем ссылку)
}
Rational Rational::operator *(const Rational &r) const {
	Rational res(*this);
	return res *= r;
}

Rational& Rational::operator /=(const Rational& r) {
	numer *= r.denom;
	denom *= r.numer;
	simplify();
	return *this;//разыменование (получаем ссылку)
}
Rational Rational::operator /(const Rational &r) const {
	Rational res(*this);
	return res /= r;
}

Rational Rational::sqrt(Rational r) {
	r.denom = sqrt(r.denom);
	r.numer = sqrt(r.numer);
	return r;
}
Rational Rational::operator ^(Rational r) const {
	Rational res(*this);
	res.denom = pow(res.denom, r);
	res.numer = pow(res.numer, r);
	return res;
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
	return ((double)numer) / denom;
}

istream& operator >>(istream& in, Rational& r) {
	in >> r.numer >> r.denom;
	return in;
}
ostream& operator <<(ostream& out, const Rational& r) {
	out << r.numer << "/" << r.denom;
	return out;
}