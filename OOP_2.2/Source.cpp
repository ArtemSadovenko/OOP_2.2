#include "Int.h"

int main() {
	Int a(4);
	Int b(a);
	Int t;
	cout << "a: " << a;
	cout << "b: " << b;
	cout << "b = "; cin >> b;
	
	t = a + b;
	cout << "a + b = " << t;
	t = a - b;
	cout << "a - b = " << t;
	t = a * b;
	cout << "a * b = " << t;
	t = a / b;
	cout << "a / b = " << t;
	t = a % b;
	cout << "a % b = " << t;
	t = a ^ b;
	cout << "a ^ b = " << t << endl;

	if (~a)
		cout << "a - prime number" << endl;
	else
		cout << "a - not prime number" << endl;
	if (a[2])
		cout << "a - even number" << endl;
	else
		cout << "a - not even number" << endl;
	return 0;
	
}