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

    for (int i = 1; i <= 40; i++)
    {
        
        cout<<i<<endl;
    }

    // Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    return 0;
}
