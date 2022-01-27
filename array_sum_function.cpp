#include <iostream>
using namespace std;

void compute_array(int arr[]) {
	int  sum = 0;
	for (int i = 0; i < 10; i++) 
		sum += arr[i];

	cout << "Sum of array: " << sum << endl;
}

void main() {
	int arr[10];
	cout << "enter 10 numbers: ";
	for (int i = 0; i < 10; i++)
		cin >> arr[i];

	compute_array(arr);

	system("pause");
}
