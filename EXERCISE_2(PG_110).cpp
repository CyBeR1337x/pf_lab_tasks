#include <iostream>
using namespace std;

struct Student {
	char name[20], address[20], degree[10];
	int semester;
	float cgpa;
};

void printLine();
Student readStudent(Student[], int);
void displayStudent(Student[], int);
void failedStudents(Student[], int);

void main() {
	Student s[50];
	int state, index = -1, student_index;
	do {
		cout << "Enter 1 to enter data of student,\n"
			<< "Enter 2 to display data of a student,\n"
			<< "Enter 3 to display data of failed students,\n"
			<< "Enter something else to exit..\n" << endl;
		printLine();
		cin >> state;

		if (state == 1) {
			index++;
			readStudent(s, index);
			cout << "Record entered Successfully..." << endl;
			printLine();
		}
		else if (state == 2) {
			if (index == -1)
				cout << "Data doesn't exist..." << endl;
			else {
			CHECK:
				cout << "Enter Index: ";
				cin >> student_index;
				student_index -= 1;
				if (student_index > index) {
					cout << "Data doesn't Exist..." << endl;
					goto CHECK;
				}
				else
					displayStudent(s, student_index);
			}
		}
		else if (state == 3) {
			if (index == -1)
				cout << "Data doesn't exist.." << endl;
			else
				failedStudents(s, index);
		}
		else
			break;

	} while (1);

	system("pause");
}

void printLine() {
	cout << "===================================" << endl;
}

Student readStudent(Student s[], int index) {
	cout << "Enter Name of student: ";
	cin >> s[index].name;

	cout << "Enter Address of student: ";
	cin.ignore(1000, '\n');
	cin.getline(s[index].address, 20);

	cout << "Enter Degree of student: ";
	cin >> s[index].degree;

	cout << "Enter semester of student: ";
	cin >> s[index].semester;

	cout << "Enter CGPA of student: ";
	cin >> s[index].cgpa;

	return s[index];
}

void displayStudent(Student s[], int index) {
	printLine();
	cout << "Student Data: " << endl;
	cout << "Student Name: " << s[index].name << endl;
	cout << "Student Degree: " << s[index].degree << endl;
	cout << "Student Semester: " << s[index].semester << endl;
	cout << "Student Addresss: " << s[index].address << endl;
	cout << "Student CGPA: " << s[index].cgpa << endl;
	printLine();
}

void failedStudents(Student s[], int limit) {

	Student failedStudents[50];
	int index = 0;
	for (int i = 0; i <= limit; i++) {
		if (s[i].cgpa < 2.5) {
			failedStudents[index] = s[i];
			index++;
		}
	}

	printLine();

	cout << "Data of Failed Students: " << endl;
	for (int i = 0; i < index; i++) {
		cout << "Name: " << failedStudents[i].name << endl;
		cout << "Degree: " << failedStudents[i].degree << endl;
		cout << "Semester: " << failedStudents[i].semester << endl;
		cout << "CGPA: " << failedStudents[i].cgpa << endl;
		cout << "Address: " << failedStudents[i].address << endl;
		printLine();
	}
}
