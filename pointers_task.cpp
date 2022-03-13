
/*
* input 5 numbers from user using pointer, and perform the following operations:
* Display Sum
* Display Min
* Display Max
* Display average
* Count negative numbers
* Count even & odd numbers
* Copy data to another pointer
* 
*/
#include <iostream>
using namespace std;

void main() {
	int inputs[5];
	int sum = 0,
		nv_counter = 0,
		even_counter = 0,
		odd_counter = 0;
	int inputs_2[5];

	//For inputs & counters
	for (int i = 0; i < 5; i++) {
		cout << "Enter 5 Values: ";
		cin >> *(inputs + i);
		if (*(inputs + i) < 0)
			nv_counter++;
		if (*(inputs + i) % 2 == 0)
			even_counter++;
		if (*(inputs + i) % 2 != 0)
			odd_counter++;
	}
	
	//To calculate Sum
	for (int i = 1; i < 5; i++)
		sum += *(inputs + i);
	
	//To find Max
	int max = *(inputs + 0);
	for (int i = 1; i < 5; i++) {
		if (*(inputs + i) > max)
			max = *(inputs + i);
	}
	
	//To find Min
	int min = *(inputs + 0);
	for (int i = 1; i < 5; i++) {
		if (*(inputs + i) < min)
			min = *(inputs + i);
	}
	
	//Copy data
	for (int i = 0; i < 5; i++) 
		*(inputs + i) = *(inputs_2 + i);

	cout << "Sum: " << sum << endl;
	cout << "Min Value: " << min << endl;
	cout << "Max Value: " << max << endl;
	cout << "Average: " << (float)sum / 5 << endl;
	cout << "Negative Numbers: " << nv_counter << endl;
	cout << "Even Numbers: " << even_counter << endl;
	cout << "Odd Numbers: " << odd_counter << endl;

	system("pause");

}
