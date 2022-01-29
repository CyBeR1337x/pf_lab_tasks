/*
* ARID NUMBER VALIDATOR
* FULL JUGAR PROGRAM
* MIGHT BE ANOTHER BETTER SOLUTION TO THIS
*/
#include <iostream>
using namespace std;

void main() {
	char* arid_no;
	int size;
	cout << "Enter size of array: ";
	cin >> size;

	arid_no = new char[size];
	cout << "Enter ARID Number: ";
	cin >> arid_no;

	int valid_name = 0;

	for (int i = 0; i < 4; i++) {
		if (arid_no[i] >= '0' && arid_no[i] <= '9')
			valid_name++;
	}
	if (arid_no[4] == '-')
		valid_name++;
	if (arid_no[9] == '-')
		valid_name++;

	if (arid_no[5] == 'A')
		valid_name++;
	if (arid_no[6] == 'R')
		valid_name++;
	if (arid_no[7] == 'I')
		valid_name++;
	if (arid_no[8] == 'D')
		valid_name++;

	for (int i = 9; i < 14; i++) {
		if (arid_no[i] >= '0' && arid_no[i] <= '9')
			valid_name++;
	}


	if (valid_name == 14)
		cout << "Arid number is valid.." << endl;
	else
		cout << "Arid number is invalid.." << endl;


	system("pause");

}
