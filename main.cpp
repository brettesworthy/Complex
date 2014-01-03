// Main.cpp - Complex type testing main program entry point
// Written by Brett Esworthy

#include <iostream>
#include "Complex.h"

using namespace std;

void main()
{
	// a is an object; an object is an instance of the class
	// user defined type Complex IS a class
	Complex a(3, 4), b(10, 20);

	// . is an operator, member access operator

	// c = a.+(b);
	Complex c = a + b;

	//Test + operator
	cout << "a + b should print Re=13; Im=24: " << c << endl;

	// c = a.-(b);
	Complex d = a - b;

	//Test - operator
	cout << "a - b should print Re=-7; Im=16: " << d << endl;

	Complex e = a * b;

	//Test * operator
	cout << "a * b should print Re=30; Im=-80: " << e << endl;

	Complex f = a / b;

	//Test / operator
	cout << "a / b should print Re=0.3; Im=0.2: " << f << endl;

	// Test Absolute() function
	cout << "a.Absolute() should print 5: " << a.Absolute() << endl;


	system("pause");
}
