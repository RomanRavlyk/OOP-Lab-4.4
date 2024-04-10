#pragma once
#include "Pair.h"
#include <iostream>
#include <sstream>
using namespace std;

class Fraction : public Pair {
public:
	Fraction() : Pair(0, 0) {};
	Fraction(long x, unsigned short y) : Pair(x, y) {};
	virtual long getHryvnya() const override { return hryvnya; };
	virtual unsigned short getKopiyka() const override { return kopiyka; };
	virtual void setHryvnya(int value) override { hryvnya = value; };
	virtual void setKopiyka(int value) override { kopiyka = value; };

	friend Fraction operator+ (const Fraction& other, const Fraction& other1);
	friend Fraction operator- (const Fraction& other, const Fraction& other1);
	friend Fraction operator* (const Fraction& other, const Fraction& other1);

	friend ostream& operator << (ostream&, const Fraction&);
	friend istream& operator >> (istream&, Fraction&);
	operator string() const;

	friend bool operator ==(const Fraction& int1, const Fraction& int2);
	friend bool operator >(const Fraction& int1, const Fraction& int2);
	friend bool operator <(const Fraction& int1, const Fraction& int2);
	friend bool operator !=(const Fraction& int1, const Fraction& int2);
	friend bool operator >=(const Fraction& int1, const Fraction& int2);
	friend bool operator <=(const Fraction& int1, const Fraction& int2);
};