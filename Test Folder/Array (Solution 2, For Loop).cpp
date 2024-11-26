 #include <iostream>
 using namespace std;
 int main()
 {
    //Input Loop
    int num [5]; //Array Declaration
    cout <<"Please Declare 5 Integers" <<endl;
    for (int i = 0; i < 5; i++) //i starts at index 0, i must be run at least 5 times, each time being declared by the user
    {
        cin >> num[i];
    }

    //Output Loop
    cout <<"The 5 integers declared are: " <<endl;
    for (int i=0; i<5; i++)
    {
        cout <<num[i] <<endl;
    }
    return 0;
 }