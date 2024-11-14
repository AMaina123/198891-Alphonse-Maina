#include <iostream>
#include <string>
using namespace std;

int main()
{
    int grade;
    string fullName;
    cout <<"Please Enter The Student's Full Name" <<endl;
    cin >> fullName; 
    cout <<"Please Enter The Student's Grade" <<endl;
    cin >> grade;
    
    if (grade >= 70 && grade <= 100) {
        cout <<" A" <<endl;
        } else if(grade >= 60 && grade < 70) {
        cout <<"B" <<endl;
        } else if (grade >= 50 && grade < 60) {
        cout <<"C" <<endl;
        } else if (grade >= 40 && grade < 50) {
        cout <<"D" <<endl;
        } else if (grade >= 0 && grade < 40) {
        cout <<"F" <<endl;
        } else {
        cout <<"Invalid" <<endl;
        }
         return 0;
}