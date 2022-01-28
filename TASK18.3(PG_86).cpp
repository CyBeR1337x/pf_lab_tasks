#include <iostream>
using namespace std;

void main() {
    char name[14];
    
    cout << "enter your name: ";
    cin >> name;
    
    int count_1 = 0, count_2 = 0, words = 0;
    
    for ( int i = 0; name[i] != NULL; i++ ) // YOU CAN USE ANY NULL or '\0'
        words++;
    
    
    for ( int i = 0; name[i] != NULL; i++ ) {
        if ( name[i] >= 'A' && name[i] <= 'Z' ) // Checks uppercase letters
            count_1++;
        
        if ( name[i] >= 'a' && name[i] <= 'z') // Checks lowercase letter
            count_2++;
    }
    
    if ( count_1 == words || count_2 == words )
        cout << "Name is valid...." << endl;
    else
        cout << "Name is invalid.. " << endl;
    
    
    system("pause");

}
