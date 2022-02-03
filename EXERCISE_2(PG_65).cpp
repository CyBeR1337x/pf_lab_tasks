/*
Prints fibonacci series...
If you don't know about Fibonacci series/sequence google it first............
*/

#include <iostream>
using namespace std;

void main() {
    int f = 1, s = 1, n , a;
    cout << "Enter a number: ";
    cin >> a;
    
    for(;f <= a;) {
        cout << f << "\t";
        n = f + s;
        f = s;
        s = n;
    }
    cout << "\n";
    
    system("pause");
}
