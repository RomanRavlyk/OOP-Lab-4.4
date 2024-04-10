#include "Money.h"
#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {
	Pair* m1 = new Money();
	Pair* m2 = new Money();
	Pair* f1 = new Fraction();
	Pair* f2 = new Fraction();

	cin >> *dynamic_cast<Money*>(m1);
	cout << *dynamic_cast<Money*>(m1);

	cin >> *dynamic_cast<Money*>(m2);
	cout << *dynamic_cast<Money*>(m2);

	cout << *dynamic_cast<Money*>(m1) + *dynamic_cast<Money*>(m2);
	cout << *dynamic_cast<Money*>(m1) - *dynamic_cast<Money*>(m2);
	cout << (*dynamic_cast<Money*>(m1)) * (*dynamic_cast<Money*>(m2));
	cout << (*dynamic_cast<Money*>(m1)) / (*dynamic_cast<Money*>(m2));
	cout << (*dynamic_cast<Money*>(m1) /= 2);
	cout << (*dynamic_cast<Money*>(m1) *= 2);


	cout << "> ";
	if (*dynamic_cast<Money*>(m1) > *dynamic_cast<Money*>(m2)) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "< ";
	if (*dynamic_cast<Money*>(m1) < *dynamic_cast<Money*>(m2)) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "== ";
	if (*dynamic_cast<Money*>(m1) == *dynamic_cast<Money*>(m2)) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << ">= ";
	if (*dynamic_cast<Money*>(m1) >= *dynamic_cast<Money*>(m2)) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "<= ";
	if (*dynamic_cast<Money*>(m1) <= *dynamic_cast<Money*>(m2)) { cout << "yes"; }
	else cout << "no" << endl;
	cout << "!= ";
	if (*dynamic_cast<Money*>(m1) != *dynamic_cast<Money*>(m2)) { cout << "yes" << endl; }
	else cout << "no" << endl;

	cout << "Real type of Money object 1: " << typeid(*m1).name() << endl;
	cout << "Real type of Money object 2: " << typeid(*m2).name() << endl;

	cin >> *dynamic_cast<Fraction*>(f1);
	cout << *dynamic_cast<Fraction*>(f1);

	cin >> *dynamic_cast<Fraction*>(f2);
	cout << *dynamic_cast<Fraction*>(f2);

	cout << *dynamic_cast<Fraction*>(f1) + *dynamic_cast<Fraction*>(f2);
	cout << *dynamic_cast<Fraction*>(f1) - *dynamic_cast<Fraction*>(f2);
	cout << (*dynamic_cast<Fraction*>(f1)) * (*dynamic_cast<Fraction*>(f2));

	cout << "> ";
	if (*dynamic_cast<Fraction*>(f1) > *dynamic_cast<Fraction*>(f2)) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "< ";
	if (*dynamic_cast<Fraction*>(f1) < *dynamic_cast<Fraction*>(f2)) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "== ";
	if (*dynamic_cast<Fraction*>(f1) == *dynamic_cast<Fraction*>(f2)) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << ">= ";
	if (*dynamic_cast<Fraction*>(f1) >= *dynamic_cast<Fraction*>(f2)) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "<= ";
	if (*dynamic_cast<Fraction*>(f1) <= *dynamic_cast<Fraction*>(f2)) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "!= ";
	if (*dynamic_cast<Fraction*>(f1) != *dynamic_cast<Fraction*>(f2)) { cout << "yes" << endl; }
	else cout << "no" << endl;

	cout << "Real type of Money object 1: " << typeid(*f1).name() << endl;
	cout << "Real type of Money object 2: " << typeid(*f2).name() << endl;

	return 0;
}