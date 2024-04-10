#pragma once
#include "Pair.h"
#include <iostream>
#include <sstream>
using namespace std;

class Money : public Pair {
public:
	Money() : Pair(0, 0) {};
	Money(long x, unsigned short y) : Pair(x, y) {};
	virtual long getHryvnya() const override { return hryvnya; };
	virtual unsigned short getKopiyka() const override { return kopiyka; };
	virtual void setHryvnya(int value) override { hryvnya = value; };
	virtual void setKopiyka(int value) override { kopiyka = value; };

	friend Money operator+ (const Money& other, const Money& other1);
	friend Money operator- (const Money& other, const Money& other1);
	friend Money operator* (const Money& other, const Money& other1);
	friend Money operator/ (const Money& other, const Money& other1);

	Money operator/= (double x);
	Money operator*= (double x);

	friend ostream& operator << (ostream&, const Money&);
	friend istream& operator >> (istream&, Money&);
	operator string() const;

	friend bool operator ==(const Money& int1, const Money& int2);
	friend bool operator >(const Money& int1, const Money& int2);
	friend bool operator <(const Money& int1, const Money& int2);
	friend bool operator !=(const Money& int1, const Money& int2);
	friend bool operator >=(const Money& int1, const Money& int2);
	friend bool operator <=(const Money& int1, const Money& int2);
};