#include <iostream>
using namespace std;

void main() {
    int price_pf, price_db, price_java, qt_pf, qt_java, qt_db;
    char s_type;
    
    cout << "Enter Quantity of PF, DB & Java lab manual: ";
    cin >> qt_pf >> qt_db >> qt_java;
    cout << "Enter selling price of PF, DB & Java Lab manual: ";
    cin >> price_pf >> price_db >> price_java;
    
    cout << "Enter b if you are ffrom BIIT: ";
    cin >> s_type;
    
    float bill = (price_pf*qt_pf)+(price_db*qt_db)+(price_java*qt_java);
    float discount = 0;
    if ( s_type == 'b' || s_type == 'B' )
        discount = ((float)bill * 20/100);
    else {
        if ( bill > 3000 )
            discount = ((float)bill * 5/100);
    }
    
    cout << "Bill without discount: " << bill << endl;
    cout << "Discount Amount: " << discount << endl;
    cout << "Bill after discount: " << bill-discount << endl;
  
  system("pause")
        
}
