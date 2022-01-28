#include <iostream>
using namespace std;

void main() {
    int o_m_finals, o_m_quizzes, o_m_mids;
    cout << "Enter Obtained marks of quizes, mids & finals: ";
    cin >> o_m_quizzes >> o_m_mids >> o_m_finals;
    
    float per = (((float)o_m_quizzes+o_m_mids+o_m_finals) / 80 ) * 100;
    
    cout << "Your percentage: " << per << endl;
    
    system("pause");
}
