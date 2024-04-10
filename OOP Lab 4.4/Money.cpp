#include "Money.h"
#include <iostream>
#include <sstream>
using namespace std;

Money operator+(const Money& other, const Money& other1)
{
	Money result;
	result.setHryvnya(other.getHryvnya() + other1.getHryvnya());
	result.setKopiyka(other.getKopiyka() + other1.getKopiyka());
	return result;
}

Money Money::operator/=(double value)
{
	hryvnya = static_cast<double>(getHryvnya()) / value;
	kopiyka = static_cast<double>(getKopiyka()) / value;
	return Money(hryvnya, kopiyka);
}

Money Money::operator*=(double value)
{
	hryvnya = static_cast<double>(getHryvnya()) * value;
	kopiyka = static_cast<double>(getKopiyka()) * value;
	return Money(hryvnya, kopiyka);
}

Money operator-(const Money& other, const Money& other1)
{
	Money result;
	result.setHryvnya(other.getHryvnya() - other1.getHryvnya());
	result.setKopiyka(other.getKopiyka() - other1.getKopiyka());
	return result;
}

Money operator*(const Money& other, const Money& other1)
{
	Money result;
	result.setHryvnya(other.getHryvnya() * other1.getHryvnya());
	result.setKopiyka(other.getKopiyka() * other1.getKopiyka());
	return result;
}

Money operator/(const Money& other, const Money& other1)
{
	Money result;
	result.setHryvnya(other.getHryvnya() / other1.getHryvnya());
	result.setKopiyka(other.getKopiyka() / other1.getKopiyka());
	return result;
}


ostream& operator << (ostream& out, const Money& r)
{
	out << string(r);
	return out;
}

istream& operator >> (istream& in, Money& r)
{
	long x;
	unsigned short y;
	cout << "Enter hryvnya: ";
	in >> x;
	cout << "Enter kopiyka: ";
	in >> y;
	r.setHryvnya(x);
	r.setKopiyka(y);
	cout << endl;
	return in;
}

Money::operator string() const {
	stringstream ss;
	ss << "Your money: ";
	ss << getHryvnya() << "." << getKopiyka();
	ss << endl;
	return ss.str();
}

bool operator >=(const Money& m1, const Money& m2) {
	return (m1.getHryvnya() >= m2.getHryvnya() && m1.getKopiyka() >= m2.getKopiyka());
}
bool operator <=(const Money& m1, const Money& m2) {
	return (m1.getHryvnya() <= m2.getHryvnya() && m1.getKopiyka() <= m2.getKopiyka());
}
bool operator !=(const Money& m1, const Money& m2) {
	return (m1.getHryvnya() != m2.getHryvnya() && m1.getKopiyka() != m2.getKopiyka());
}

bool operator==(const Money& m1, const Money& m2) {
	return (m1.getHryvnya() == m2.getHryvnya() && m1.getKopiyka() == m2.getKopiyka());
}

bool operator<(const Money& m1, const Money& m2) {
	return (m1.getHryvnya() < m2.getHryvnya() && m1.getKopiyka() < m2.getKopiyka());
}

bool operator>(const Money& m1, const Money& m2) {
	return (m1.getHryvnya() > m2.getHryvnya() && m1.getKopiyka() > m2.getKopiyka());
}