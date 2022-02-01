/*
* How to create a swap function
* as we know that a function can only return one value
* so we will call function by 'reference'
* instead of passing value we will pass the variable's address
*/

#include <iostream>
using namespace std;

void swap(int&, int&);

void main() {
	int x = 24, y = 0;
	cout << "Before Swapping: " << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	swap(x, y);

	cout << "After swapping: " << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	system("pause");
}

void swap(int& x, int& y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}
