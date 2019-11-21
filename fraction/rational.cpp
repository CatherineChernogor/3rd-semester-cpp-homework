#include <iostream>
#include "rational.h"

int Rational::rsqr(int a){
    int x=a;
    int preX=0;
    while(true){
        x= (x + a / x)/2;
        if (x==preX)
            break;
        }
	return x;
}

Rational Rational::rsqrt() {
    Rational res(*this);
    res.denom = rsqr(res.denom);
    res.numer = rsqr(res.numer);
    return res;
}

/*
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
*/
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