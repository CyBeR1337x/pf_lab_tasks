//Factorial calculator

#include <iostream>
using namespace std;

void main() {
    int x, a = 1;
    cout << "Enter number: ";
    cin >> x;
    
    for ( int i = 1; i <= x; i++ )
         a *= i;
    
    cout << "Factorial: " << a << endl;
    
    system("pause");
}
