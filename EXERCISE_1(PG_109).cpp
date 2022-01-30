/*
       /////
*/

#include <iostream>
using namespace std;

struct Person {
	char name[10];
	int age;
	char address[25];
};

void main() {
	Person p1;
	cout << "Enter Name = ";
	cin >> p1.name;
	cout << "Enter Age = ";
	cin >> p1.age;
	cout << "Enter your address: ";
	cin.ignore(1000, '\n');
	cin.getline(p1.address, 25);

	cout << "Person is ";
	if (p1.age < 20)
		cout << "Young" << endl;
	else if (p1.age >= 20 && p1.age <= 50)
		cout << "Middle" << endl;
	else if (p1.age > 50)
		cout << "Old" << endl;

	system("pause");
}
