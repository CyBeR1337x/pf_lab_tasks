/*
* Statement:
* Write a program to represent Room as a collection of length(Distance type) & Width(Distance type).
* Define 'calculateArea' function to calculate the area of a room( i.e Area = length * width )in square feet.
* Define input and output functions both Distance and Room structres. Write main program to demonstrate the functionality of calculateArea
* Function.
*/

/*
* Notes:
* Have no idea if this is correct or not..
*/




#include <iostream>
using namespace std;

struct Distance {
	int feet;
	float inches;
};

struct Room {
	Distance length, width;
};

Room input();
void output(float);
float calculateArea(Room);

void main() {
	Room r1;
	r1 = input();
	float r2 = calculateArea(r1);
	output(r2);
  system("pause");
}

Room input() {
	Room x;
	cout << "Enter length feet & inches: ";
	cin >> x.length.feet >> x.length.inches;
	cout << "Enter Width feet & inches: ";
	cin >> x.width.feet >> x.width.inches;

	return x;
}

float calculateArea(Room x) {
	float length = (x.length.feet * 12) + x.length.inches; //Converting feet into inches by mutliplying by 12 and adding to inches to get length
	float width = (x.width.feet * 12) + x.width.inches; //Same here to get width

	float area = (length * width) / 144; //Converting total area into square feet.
	return area;
}

void output(float d) {
	cout << "Area: " << d << endl;
}



