#include <iostream>
using namespace std;
void main() {
	int size;
	cout << "Enter no. of employees: ";
	cin >> size;

	int input;

	int* emp_no = new int[size];
	int index = 0;
	emp_no[0] = -1; // :D (CODE HACKS EVERYWHERE)


	for (int i = 0; i < size; i++) {
		cout << "Enter employee number: ";
		cin >> input;
		for (int j = 0; j < i; j++) {
			if (input != emp_no[j]) {
				if (j == (i - 1)) {
					emp_no[index] = input;
					index++;
				}
			}
		}
	}

	system("pause");
}
