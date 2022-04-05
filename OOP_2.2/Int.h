#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Int
{
private :
	int o;
public:
	Int();
	Int(int a);
	Int(Int& a);

	inline void set(int a) { o = a; }
	inline int get() { return o; }

	friend Int operator + (Int& a, Int& b);
	friend Int operator - (Int& a, Int& b);
	friend Int operator * (Int& a, Int& b);
	friend Int operator / (Int& a, Int& b);
	friend Int operator % (Int& a, Int& b);

	bool operator [] (int a);
	bool operator ~ ();

	friend Int operator ^ (Int& a, int b);
	friend Int operator ^ (Int& a, Int& b);
	friend ostream& operator << (ostream& out,  Int& a);
	friend istream& operator >> (istream& in, Int& a);

};

