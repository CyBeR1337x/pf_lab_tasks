#include <iostream>
using namespace std;

void display( float usd ) {
    cout << "USD: " << usd << endl;
}

float convert( float pkr ) {
    float x = (float)pkr / 130;
    return x;
}

void pkr_to_usd() {
    float pkr;
    cout << "Enter PKR: ";
    cin >> pkr;
    float res = convert( pkr );
    display(res);
}

void main() {
    pkr_to_usd();
    system("pause");
}
