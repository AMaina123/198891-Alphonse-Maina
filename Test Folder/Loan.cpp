#include <iostream>
#include <string>
using namespace std;
int main()
{
    string userName, message;
    int age, bankBalance, accountAge;
    cout <<" Please input your bank details: " <<endl;
    cout <<"Age" <<endl;
    cin >>age; 
    cout<<"Bank Balance" <<endl;
    cin >>bankBalance; 
    cout<<"Account Age in months" <<endl;
    cin >>accountAge;

    message = (age >= 22, bankBalance >= 50,000, accountAge >=6)? "Eligible for loan" : "Not Eligible for Loan";
    cout <<message <<endl;
    
}