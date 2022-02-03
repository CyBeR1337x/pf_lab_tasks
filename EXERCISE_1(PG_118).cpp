/*
* Please note that:
* I am not sure if the subtractDistance() function is correct or not,
* so please message if you have a better solution for it.
*/


#include <iostream>
using namespace std;

struct Distance {
	int feet;
	float inches;
};


Distance inputDistance();
void showDistance(Distance);
Distance addDistance(Distance, Distance);
Distance subtractDistance(Distance, Distance);


void main() {
	Distance d1 = inputDistance();
	Distance d2 = inputDistance();
	Distance d3 = addDistance(d1, d2);
	Distance d4 = subtractDistance(d1, d2);

	showDistance(d1);
	showDistance(d2);
	cout << "Addition: ";
	showDistance(d3);
	cout << "Subtraction: ";
	showDistance(d4);
}

Distance inputDistance() {
	Distance x;
	cout << "Enter Feet: ";
	cin >> x.feet;
	cout << "Enter Inches: ";
	cin >> x.inches;
	return x;
}

void showDistance(Distance d) {
	cout << d.feet << "'-" << d.inches << "\"" << endl;
}

Distance addDistance(Distance a, Distance b) {
	Distance res;
	res.feet = a.feet + b.feet;
	res.inches = a.inches + b.inches;

	if (res.inches >= 12) {
		res.feet++;
		res.inches -= 12;
	}

	return res;
}

Distance subtractDistance(Distance a, Distance b) {
	Distance res;

	if (a.inches < b.inches) {
		a.feet--;
		a.inches += 12;
	}

	res.feet = a.feet - b.feet;
	res.inches = a.inches - b.inches;

	return res;
}
