/*
* ARID NUMBER VALIDATOR
* FULL JUGAR PROGRAM
* MIGHT BE ANOTHER BETTER SOLUTION TO THIS
*/
#include <iostream>
using namespace std;

int main() {
    char* arid_no;
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    arid_no = new char[size];
    cout << "Enter ARID Number: ";
    cin >> arid_no;

    int valid_id = 0;

    for (int i = 0; i < 4; i++) {
        if (arid_no[i] >= '0' && arid_no[i] <= '9')
            valid_id++;
    }
    if (arid_no[4] == '-')
        valid_id++;
    if (arid_no[9] == '-')
        valid_id++;

    if (arid_no[5] == 'A')
        valid_id++;
    if (arid_no[6] == 'R')
        valid_id++;
    if (arid_no[7] == 'I')
        valid_id++;
    if (arid_no[8] == 'D')
        valid_id++;

    for (int i = 10; i < 14; i++) 
        if (arid_no[i] >= '0' && arid_no[i] <= '9')
            valid_id++;
    


    if (valid_id == 14)
        cout << "Arid number is valid.." << endl;
    else
        cout << "Arid number is invalid.." << endl;


    system("pause");

}

