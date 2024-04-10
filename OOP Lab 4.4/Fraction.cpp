#include "Fraction.h"
#include <iostream>
#include <sstream>
using namespace std;

Fraction operator+(const Fraction& other, const Fraction& other1)
{
	Fraction result;
	result.setHryvnya(other.getHryvnya() + other1.getHryvnya());
	result.setKopiyka(other.getKopiyka() + other1.getKopiyka());
	return result;
}

Fraction operator-(const Fraction& other, const Fraction& other1)
{
	Fraction result;
	result.setHryvnya(other.getHryvnya() - other1.getHryvnya());
	result.setKopiyka(other.getKopiyka() - other1.getKopiyka());
	return result;
}

Fraction operator*(const Fraction& other, const Fraction& other1)
{
	Fraction result;
	result.setHryvnya(other.getHryvnya() * other1.getHryvnya());
	result.setKopiyka(other.getKopiyka() * other1.getKopiyka());
	return result;
}



ostream& operator << (ostream& out, const Fraction& r)
{
	out << string(r);
	return out;
}

istream& operator >> (istream& in, Fraction& r)
{
	long x;
	unsigned short y;
	cout << "Enter first num: ";
	in >> x;
	cout << "Enter second num: ";
	in >> y;
	r.setHryvnya(x);
	r.setKopiyka(y);
	cout << endl;
	return in;
}

Fraction::operator string() const {
	stringstream ss;
	ss << "Your nums: ";
	ss << getHryvnya() << " & " << getKopiyka();
	ss << endl;
	return ss.str();
}

bool operator >=(const Fraction& m1, const Fraction& m2) {
	return (m1.getHryvnya() >= m2.getHryvnya() && m1.getKopiyka() >= m2.getKopiyka());
}
bool operator <=(const Fraction& m1, const Fraction& m2) {
	return (m1.getHryvnya() <= m2.getHryvnya() && m1.getKopiyka() <= m2.getKopiyka());
}
bool operator !=(const Fraction& m1, const Fraction& m2) {
	return (m1.getHryvnya() != m2.getHryvnya() && m1.getKopiyka() != m2.getKopiyka());
}

bool operator==(const Fraction& m1, const Fraction& m2) {
	return (m1.getHryvnya() == m2.getHryvnya() && m1.getKopiyka() == m2.getKopiyka());
}

bool operator<(const Fraction& m1, const Fraction& m2) {
	return (m1.getHryvnya() < m2.getHryvnya() && m1.getKopiyka() < m2.getKopiyka());
}

bool operator>(const Fraction& m1, const Fraction& m2) {
	return (m1.getHryvnya() > m2.getHryvnya() && m1.getKopiyka() > m2.getKopiyka());
}