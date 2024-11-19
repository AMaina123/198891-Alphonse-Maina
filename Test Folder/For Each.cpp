#include <iostream>
using namespace std;
int main()
{
    int arrayNumbers[]={1,2,3,4,5}; //Create and initialize an array container
    for (int value : arrayNumbers) //foreach loop to iterate over the arrray //The value must be the same as the ones in the array
    {
        cout <<value <<"";
    } cout <<endl;
    return 0;

}