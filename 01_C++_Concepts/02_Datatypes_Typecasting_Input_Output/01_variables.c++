#include <iostream>
using namespace std;

int glo = 6;

// declearing & initializing a function:

void func()
{
    cout << glo << endl;
}

int main()
{
    // Varaibles are containers that store data in memory.
    // There are diff. datatypes in C++ like:
    /*
        int - stores integers (whole numbers), without decimals, such as 123 or -123
        double - stores floating point numbers, with decimals, such as 19.99 or -19.99
        char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
        string - stores text, such as "Hello World". String values are surrounded by double quotes
        bool - stores values with two states: true or false
    */
    // Variable Scope:
    // The scope of a variable is the region in a program where the existence of that variable is valid.
    // Based on its scope, variables can be classified into two types:

    // Local variables:
    // Local variables are declared inside the braces of any function and can be assessed only from that particular function.

    // Global variables:
    // Global variables are declared outside of any function and can be accessed from anywhere.

    int glo = 88;
    int a = 68;
    float b = 69.96;
    bool c = true; // Output : 1:true, 0:false
    char d;
    d = 'A';

    cout << "The value of a is : " << a << endl;
    cout << "The value of b is : " << b << endl;
    cout << "The value of c is : " << c << endl;
    cout << "The value of d is : " << d << endl;
    func(); // In these case Local variables precedence is more than global variable
    cout << glo;

    return 0;
}