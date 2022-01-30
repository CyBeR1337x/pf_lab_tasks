#include <iostream>
using namespace std;

void display( float c ) {
    cout << "Centigrade: " << c << endl;
}

float convert( float far ) {
    float x = ((float)5/9)*(far-32);
    return x;
}

void far_to_cen() {
    float temp;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> temp;
    float cel = convert( temp );
    display(cel);
}

void main() {
    far_to_cen();
    system("pause");
}
