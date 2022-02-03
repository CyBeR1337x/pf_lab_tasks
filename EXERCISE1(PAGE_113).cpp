#include <iostream>
using namespace std;

struct Time {
	int hours;
	int mins;
	int seconds;
};

void printDuration(Time);
Time inputTime();
Time calculateDuration(Time, Time);


void main() {
	char choice;
	do {
		Time start_time, end_time, duration;

		cout << "Enter Start Time: ";
		start_time = inputTime();
		cout << "Enter End Time: ";
		end_time = inputTime();

		duration = calculateDuration(start_time, end_time);

		printDuration(duration);

		cout << "Do you wish to continue(y/n): ";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');


	system("pause");
}

Time inputTime() {
	Time x;
	cin >> x.hours;
	cin.ignore(1, ':');
	cin >> x.mins;
	cin.ignore(1, ':');
	cin >> x.seconds;
	return x;
}

void printDuration(Time duration) {
	cout << "Duration: " << duration.hours << ":" << duration.mins << ":" << duration.seconds << endl;
}

Time calculateDuration(Time t1, Time t2) {
	Time res;
	res.seconds = t2.seconds - t1.seconds;
	res.mins = t2.mins - t1.mins;
	res.hours = t2.hours - t1.hours;

	if (res.seconds < 0) {
		res.mins--;
		res.seconds += 60;
	}
	if (res.mins < 0) {
		res.hours--;
		res.mins += 60;
	}

	return res;
}
