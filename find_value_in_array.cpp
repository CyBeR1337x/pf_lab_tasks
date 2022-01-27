/*
Finds a value in an array of ten numbers
and tell how many times it is being repeated
*/

#include <iostream>
using namespace std;

void main() {
	
	int list[10];
	int x, counter = -1, num, found = 0;
	
	cout << "Enter Ten Numbers: ";
	
	for (int i = 0; i < 10; i++)
		cin >> list[i];
	
	cout << "Enter a number to be searched: ";
	cin >> x;
	
	for (int i = 0; i < 10; i++) {
		if (x == list[i]) {
			num = list[i];
			found = 1;
			counter++;
		}
	}
	
	if (found == 1) {
		cout << "Number found.." << endl;
		cout << num << " is being repeated " << (counter) << " times" << endl;
	}
	else if (found == 0)
		cout << "Number not found.." << endl;



	system("pause");

}
