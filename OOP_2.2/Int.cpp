#include "Int.h"

Int operator+(Int& a, Int& b)
{
	Int t(0);
	t.o = a.o + b.o;
	return t;
}

Int operator-(Int& a, Int& b)
{
	Int t(0);
	t.o = a.o - b.o;
	return t;
}

Int operator*(Int& a, Int& b)
{
	Int t(0);
	t.o = a.o * b.o;
	return t;
}

Int operator/(Int& a, Int& b)
{
	if (b.o)
	{
		Int t(0);
		t.o = a.o / b.o;
		return t;
	}
	else
	{
		cerr << "Error!" << endl;
		return -1;
	}
}

Int operator%(Int& a, Int& b)
{
	if (b.o)
	{
		Int t(0);
		t.o = a.o % b.o;
		return t;
	}
	else
	{
		cerr << "Error!" << endl;
		return -1;
	}
}

Int operator^(Int& a, int b)
{
	Int t;
	t.o = pow(a.o, b);
	return t;
}

Int operator^(Int& a, Int& b)
{
	Int t;
	t.o = pow(a.o, b.o);
	return t;
}

ostream& operator<<(ostream& out, Int& a)
{
	out << a.o << endl;
	return out;
}

istream& operator>>(istream& in, Int& a)
{
	in >> a.o;
	return in;
}

Int::Int()
{
	o = 0;
}

Int::Int(int a)
{
	o = a;
}

Int::Int(Int& a)
{
	o = a.o;
}

bool Int::operator[](int a)
{
	if (o % a == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool Int::operator~()
{
	int n = 0;
	for (int i = 2; i < o / 2; i++) {
		if (o % i == 0) {
			n++;
		}
	}
	return n == 0;
}
