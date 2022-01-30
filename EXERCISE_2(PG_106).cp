#include <iostream>
using namespace std;

void search(int[], int);

void main() {
    int arr[10] = {2, 4, 5, 8, 12, 15, 17, 21, 25, 58};
    int x;
    cout << "Enter number to be searched: ";
    cin >> x;
    search(arr, x);
    system("pause");
}

void search(int arr[], int x) {
    int index = -1;
    for ( int i = 0 ; i < 10; i++ ) {
        if ( x == arr[i] )
            index = i;
    }
    if ( index == -1 )
        cout << "Not Found" << endl;
    else
        cout << index << endl;
}
