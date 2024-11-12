#include <iostream>
#include <string>
using namespace std;

int main()
{
    string childname, interest; //Variable declaration
    int age;
    
    cout << "Input your child's name: " <<endl;
    getline (cin, childname);
    cout << "Input your child's age: " <<endl; //Prompt input
    cin >>age;

    if (age >= 4 && age <=10) //Arguments
    {
        cout <<"Input your child's interest: ";
        cin >> interest;
        if (interest == "Football") //First nested if
        {
            cout <<childname <<" has been successfully admitted into the Football Play Group! " <<endl;
        }
       else if (interest == "Art")
        {
            cout <<childname <<" has been successfully admitted into the Art Play Group! " <<endl;
        }
       else if (age <4 && >10)
       {
        cout <<childname <<" is too old for these groups! " <<endl;
       }
        cout <<childname <<" has been admitted and assigned to other groups. " <<endl;
       }
       
       return 0;
    }
