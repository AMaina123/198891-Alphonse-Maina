#include <iostream>
using namespace std;

int main()
{
    int option; //Switch variable
    cout << " Hi. This is your BBIT Sem 1 Timetable (May-Aug 2024)";
    cout << " \n 1.Monday \n 2.Tuesday \n 3.Wednesday \n 4.Thursday \n 5.Friday " <<endl;
    cout << " Please select day of choice " <<endl;
    cin >>option;

    switch (option){
    case 1:
    cout <<"Monday Classes \n" <<endl;
    cout <<"\t1. BBIT 1106: Math for Biz" <<endl;
    cout <<"\t2. BBIT 1102: Intro to Programming" <<endl;
        break;
    case 2:
    cout <<"Tuesday Classes \n" <<endl;
    cout <<"\t2. BBIT 1102:Intr ";
    default:
        break;
    }
}