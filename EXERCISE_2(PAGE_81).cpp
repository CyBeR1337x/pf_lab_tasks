#include <iostream>
using namespace std;

void main() {

        int array[10];
	cout << "Enter 10 values: ";
	for (int i = 0; i < 10; i++)
		cin >> array[i];

	for (int i = 9; i >= 1; i--) {
		int max = 0;
		for (int j = 1; j <= i; j++)
			if (array[max] < array[j])
				max = j;
		int temp;
		temp = array[max];
		array[max] = array[i];
		array[i] = temp;
	}

	cout << "Sorted List: [ ";
	for (int i = 0; i < 10; i++)
		cout << array[i] << " ";

	cout << "]" << endl;

        system("pause");
}
