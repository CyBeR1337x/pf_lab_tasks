/*
 IDK IF THIS IS THE DESIRED SOLUTION OR NOT MAKE SURE YOU READ STATEMENT BY YOURSELF..
*/
#include <iostream>
using namespace std;

void main() {
	int size;
	cout << "Enter no. of courses Studied: ";
	cin >> size;
	float* obtained_quality_points = new float[size];
	float* credit_hour = new float[size];

	cout << "Enter Credit Hour & Quality points: ";
	for (int i = 0; i < size; i++)
		cin >> credit_hour[i] >> obtained_quality_points[i];

	int sum_obt_points = 0, sum_credit_hours = 0;
	for (int i = 0; i < size; i++) {
		sum_obt_points += obtained_quality_points[i];
		sum_credit_hours += credit_hour[i];
	}

	float cgpa = sum_obt_points / sum_credit_hours;

	cout << "Your CGPA: " << cgpa << endl;

	system("pause");
}
