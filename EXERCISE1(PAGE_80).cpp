#include <iostream>
using namespace std;

void main() {

	int list[10];
	cout << "Enter 10 values: ";
	for (int i = 0; i < 10; i++)
		cin >> list[i];

	int sum_even = 0,
		sum_odd = 0,
		odd_count = 0,
		even_count = 0;

	for (int i = 0; i < 10; i++) {
		if (list[i] % 2 != 0) {
			sum_odd += list[i];
			odd_count++;
		}
	}

	for (int i = 0; i < 10; i++) {
		if (list[i] % 2 == 0) {
			sum_even += list[i];
			even_count++;
		}
	}

	cout << "Average of Even Numbers: " << (float)sum_even / even_count << endl;
	cout << "Average of Odd Numbers: " << (float)sum_odd / odd_count << endl;

	system("pause");
}
