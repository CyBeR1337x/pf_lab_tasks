#include <iostream>
using namespace std;


void main() {

	int arr[20], even_counter = 0,
		odd_counter = 0;

	cout << "Enter 20 numbers: ";
	for (int i = 0; i < 20; i++) {
		cin >> arr[i];
		if (arr[i] % 2 == 0)
			even_counter++;
		if (arr[i] % 2 != 0)
			odd_counter++;
	}

	int* even_arr = new int[even_counter];
	int* odd_arr = new int[odd_counter];

	int ev = 0;
	for (int i = 0; i < 20; i++) {
		if (arr[i] % 2 == 0) {
			even_arr[ev] = arr[i];
			ev++;
		}
	}
	int odd = 0;
	for (int i = 0; i < 20; i++) {
		if (arr[i] % 2 != 0) {
			odd_arr[odd] = arr[i];
			odd++;
		}
	}
	system("pause");

}
