#include <iostream>
using namespace std;

int power(int base, int exp) {
	int res = 1;
	for (int i = 0; i < exp; i++)
		res *= base;

	return res;
}

void main() {
	int base, exp;
	cout << "Enter Base: ";
	cin >> base;
	cout << "Enter Exponent: ";
	cin >> exp;
	int result = power(base, exp);
	cout << base << " power " << exp << " = " << result << endl;
}
