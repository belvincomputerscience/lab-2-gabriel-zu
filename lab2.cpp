// This code calculates the average grade. Lab #2 Gabriel Zuraa
#include <iostream>

using namespace std;

int main()
{
    int grade1;
    int grade2;
    int grade3;
    int grade4;
    float avg_grade;
    
    cout << "First grade?" << endl;
    cin >> grade1;
    
    cout << "Second grade?" << endl;
    cin >> grade2;
    
    cout << "Third grade?" << endl;
    cin >> grade3;
    
    cout << "Fourth grade?" << endl;
    cin >> grade4;
    
    avg_grade = (grade1 + grade2 + grade3 + grade4) / 4;
    cout << "Average grade is: " << avg_grade << endl;

    return 0;
}
