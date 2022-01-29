#include <iostream>
using namespace std;

void main() {
	int marks[50];
	cout << "Enter marks of 50 students: ";
	for (int i = 0; i < 50; i++)
		cin >> marks[i];

	int first = -1, second = -1, third = -1;

	for (int i = 0; i < 50; i++) {
		if (marks[i] > first) {
			third = second;
			second = first;
			first = marks[i];
		}
		else if (marks[i] > second) {
			third = second;
			second = marks[i];
		}
		else if (marks[i] > third)
			third = marks[i];
	}

	cout << "Top 3 marks: " << endl;
	cout << "First: " << first << endl
		<< "Second: " << second << endl
		<< "Third: " << third << endl;


	system("pause");

}
