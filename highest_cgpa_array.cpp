/*
 Input no. of students from user 
 create an array of size based on no. of students
 input their cgpa 
 and display the highest CGPA
*/
#include <iostream>
using namespace std;

void main() {
	int size;
	float* cgpa;
	cout << "Enter no of students: ";
	cin >> size;
	cgpa = new float[size];
	cout << "Enter CGPA of students: ";
	for (int i = 0; i < (size-1); i++) 
		cin >> cgpa[i];

	float max = cgpa[0];
	for (int i = 1; i < size; i++) {
		if (max < cgpa[i])
			max = cgpa[i];
	}
	cout << "Highest CGPA is: " << max << endl;
	system("pause");
}
