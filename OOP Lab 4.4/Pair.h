#pragma once
#include <iostream>
using namespace std;

class Pair {
protected:
	long hryvnya;
	unsigned short kopiyka;
public:
	Pair() {
		hryvnya = 0;
		kopiyka = 0;
	}

	Pair(long value, unsigned short value1) {
		hryvnya = value;
		kopiyka = value1;
	}

	Pair(const Pair& p) {
		hryvnya = p.hryvnya;
		kopiyka = p.kopiyka;
	}

	virtual ~Pair() {};

	virtual long getHryvnya() const = 0;
	virtual unsigned short getKopiyka() const = 0;
	virtual void setHryvnya(int value) = 0;
	virtual void setKopiyka(int value) = 0;
};