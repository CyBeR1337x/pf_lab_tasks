#include <iostream>
using namespace std;

void main() {
	int total_marks_pf, obt_marks_pf, total_marks_ds, obt_marks_ds, total_marks_itc, obt_marks_itc;

	cout << "Total & Obtained Marks shouldn't be negative & obtained marks cannot be greated than total marks.." << endl;
	do {
		cout << "Enter Total Marks of PF: ";
		cin >> total_marks_pf;
	} while (total_marks_pf < 0);

	do {
		cout << "Enter Total Marks of DS: ";
		cin >> total_marks_ds;
	} while (total_marks_ds < 0);

	do {
		cout << "Enter Total Marks of ITC: ";
		cin >> total_marks_itc;
	} while (total_marks_itc < 0);


	do {
		cout << "Enter Obtained Marks of PF: ";
		cin >> obt_marks_pf;
	} while (obt_marks_pf < 0 || obt_marks_pf > total_marks_pf);

	do {
		cout << "Enter Obtained Marks of DS: ";
		cin >> obt_marks_ds;
	} while (obt_marks_ds < 0 || obt_marks_ds > total_marks_ds);

	do {
		cout << "Enter Obtained Marks of ITC: ";
		cin >> obt_marks_itc;
	} while (obt_marks_itc < 0 || obt_marks_itc > total_marks_itc);

	float per = (((float)obt_marks_ds + obt_marks_itc + obt_marks_pf) / (total_marks_pf + total_marks_ds + total_marks_itc)) * 100;

	cout << "Your Percentage: " << per << endl;



	system("pause");
}
