 #include <iostream>
 using namespace std;
 int main()
 {
    //Input Loop
    int num [5]; //Array Declaration
    int sum = 0; 
    int product = 1;
    
    cout <<"Please Declare 5 Integers" <<endl;
    for (int i = 0; i < 5; i++) //i starts at index 0, i must be run at least 5 times, each time being declared by the user
    {
        cin >> num[i];
    }

    //Output Loop
    cout <<"The 5 integers declared are: " <<endl;
    for (int i : num) 
    {
        cout <<num[i] <<endl;
        sum = sum + num[i]; //sum+=num[i] //Adding array elements
        product = product * num[i]; //product*=num[i] //Multiplying array elements
        //How to find the number of elements in an array when you don't know them: sum//sizeof(nums)/4)
    }

    cout <<"The sum of the array elements using for loop= " <<sum <<endl;

    //Mean of the array
    cout <<"The mean of the array given is: " <<sum/5 <<endl;

    //Print a value out of array range
    cout <<"Value at index 5" <<num[5] <<endl;
 }