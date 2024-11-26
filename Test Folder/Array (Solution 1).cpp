#include <iostream>
using namespace std;
int main()
{
    int num[5]; //Array Declared with 5 integer values
    cout <<"Please enter 5 Integers" <<endl; //User prompt
    cin >> num[0]; //Assigned Value in the Index 0 position
    cin >> num[1]; //The numbers aren't values, they are positions.
    cin >> num[2];
    cin >> num [3];
    cin >> num [4];
    cout <<"The 5 values entered are:  " <<endl; //Output
    cout << num [0] <<endl;
    cout << num [1] <<endl;
    cout << num [2] <<endl;
    cout << num [3] <<endl;
    cout << num [4] <<endl;

    return 0;
}