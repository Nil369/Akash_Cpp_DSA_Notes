#include <iostream>

using namespace std;
int main()
{
    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop => ENTRY CONTROLLED LOOP => Condition is checked BEFORE entering the body of loop
        2. While Loop => ENTRY CONTROLLED LOOP 
        3. do-While Loop =>EXIT CONTROLLED LOOP => Condition is checked AFTER entering the body of loop
    */

    // Syntax for for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    for (int i = 1; i <= 6; i++)
    {
        
        cout<<i<<endl;
    }

    // Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    // Finding sum of n numbers inputed by user:

    int n,sum = 0;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
       sum +=i;
    }
    cout<<"Sum = "<<sum;

    return 0;
}
