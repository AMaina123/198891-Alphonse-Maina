#include <iostream>
using namespace std;

int main()
{
    double myNum=15.5; //Variable initialization
    int myNewNum=(int)myNum; /*Create a new integer variable and explicitly cast it to integer*/
    cout <<myNewNum <<endl; 

    double mySecondNewNum=25.5;
    int myThirdNewNum=int(mySecondNewNum);
    cout <<myThirdNewNum <<endl;
}