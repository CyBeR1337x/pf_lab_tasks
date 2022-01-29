#include <iostream>
using namespace std;

void main() {
	int x[4] = { 1,3,5,6 };
	int y[3] = { 2,4,8 };

	int z[7];

	for (int i = 0; i < 4; i++)
		z[i] = x[i];

	int index = 4;
	for (int i = 0; i < 3; i++) {
		z[index] = y[i];
		index++;
	}

	//Sorts the arrays
	for (int i = 6; i >= 1; i--) {
		int max = 0;
		for (int j = 0; j <= i; j++)
			if (z[max] > z[j])
				max = j;

		int temp;
		temp = z[max];
		z[max] = z[i];
		z[i] = temp;
	}

	system("pause");

}
