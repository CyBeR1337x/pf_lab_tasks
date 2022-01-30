#include <iostream>
using namespace std;

void compute_array( int a[] );

void main() {
    int array[10];
    cout << "Enter 10 numbers: ";
    for ( int i = 0; i < 10; i++ )
        cin >> array[i];
    
    compute_array(array);
    
    system("pause");
}

void compute_array( int a[] ) {
    int sum = 0;
    for ( int i = 0; i < 10; i++ )
        sum += a[i];
    
    cout << "Sum of array: " << sum << endl;
}
