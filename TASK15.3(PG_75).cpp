#include <iostream>

using namespace std;

void main() {
    int salary, limit, max_sal_male = 0, max_sal_female = 0;
    char gender;
  
    cout << "Enter no. of employees: ";
    cin >> limit;
  
    for ( int i = 0; i < limit; i++ ) {
        cout << "Enter Gender of employee: [m/M, f/F]:  ";
        cin >> gender;
      
        if ( gender == 'm' || gender == 'M' ) {
            cout << "Enter Salaray of employee: ";
            cin >> salary;
            if (max_sal_male < salary)
                max_sal_male = salary;
        }
        else if ( gender == 'f' || gender == 'F' ) {
            cout << "Enter Salaray of employee: ";
            cin >> salary;
            if (max_sal_female < salary)
                max_sal_female = salary;
        }
    }
    cout << "Maximum Salaray of male: " << max_sal_male << endl;
    cout << "Maximum Salaray of female: " << max_sal_female << endl;
    
    system("pause");
  
}
