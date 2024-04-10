#include "Money.h"
#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {
	Money m1;
	Money m2;
				
	cin >> m1;
	cout << m1;

	cin >> m2;
	cout << m2;

	cout << m1 + m2;
	cout << m1 - m2;
	cout << m1 * m2;
	cout << m1 / m2;
	cout << (m1 /= 2);
	cout << (m1 *= 2);


	cout << "> ";
	if (m1 > m2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "< ";
	if (m1 < m2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "== ";
	if (m1 == m2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << ">= ";
	if (m1 >= m2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "<= ";
	if (m1 <= m2) { cout << "yes"; }
	else cout << "no" << endl;
	cout << "!= ";
	if (m1 != m2) { cout << "yes" << endl; }
	else cout << "no" << endl;

	cout << "Real type of Money object 1: " << typeid(m1).name() << endl;
	cout << "Real type of Money object 2: " << typeid(m2).name() << endl;

	Fraction f1;
	Fraction f2;

	cin >> f1;
	cout << f1;

	cin >> f2;
	cout << f2;

	cout << f1 + f2;
	cout << f1 - f2;
	cout << f1 * f2;

	cout << "> ";
	if (f1 > f2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "< ";
	if (f1 < f2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "== ";
	if (f1 == f2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << ">= ";
	if (f1 >= f2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "<= ";
	if (f1 <= f2) { cout << "yes"; }
	else cout << "no" << endl;
	cout << "!= ";
	if (f1 != f2) { cout << "yes" << endl; }
	else cout << "no" << endl;

	cout << "Real type of Money object 1: " << typeid(f1).name() << endl;
	cout << "Real type of Money object 2: " << typeid(f2).name() << endl;
}