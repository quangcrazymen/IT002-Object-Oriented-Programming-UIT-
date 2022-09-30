#include <iostream>
using namespace std;
class fraction {
	int numerator, denominator;
public:
	int get_numerator() {
		return this->numerator;
	}
	int get_denominator() {
		return this->denominator;
	}
	void import();
	void print();
	void simplify();
	~fraction() {
	}
};