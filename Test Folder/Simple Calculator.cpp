#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    cout << "Enter the numbers"; 
    cin >> num1 >> num2;
    double calculator; 
    cout <<"Enter calculator ("sum", "difference", "mult", "div"): ";

    int sum= num1 + num2;
    cout << "Sum is";
    cin >>num1 >>num2 >>endl;
    int difference= num1 - num2;
    cout <<"Difference is";
    cin >>num1 >>num2 >>endl;
    int mult= num1 * num2;
    cout << "Product is";
    cin >> num1 >> num2 >>endl;
    int div= num1/num2;
    cout <<"Divided number is";
    cin >> num1 >> num2 >> endl;

     if (sum)
    {
        cout<<"The result of this operation is " <<sum; 
    } else if (difference){
        cout<<"The result of this operation is " <<difference;
    } else if (mult){
        cout<<"The result of this operation is " <<mult;
    } else if (div){
        cout<<"The result of this operation is " <<div; 
    } 
    
    return 0;
}