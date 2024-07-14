#include <iostream>
using namespace std;

// Function Protoype:
// •	Declaration of a function that specifies the function's name, return type, and parameters without the body.
// •	It Informs the compiler about the function before its actual definition
// •	Syntax: datatype_of_function func_name(arguments);

// int sum(int a,int b); // Acceptable
// int sum(int a,b); // Not Acdeptable
int sum(int, int); // Acceptable
void gm();

int main()
{
    gm();
    int num1, num2;
    // num1 and num2 are actual parameters
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum(num1, num2) << endl;
    

    return 0;
}

int sum(int a, int b)
{   // Formal Parameters a and b will be taking values from actual parameters num1 and num2.
    int c = a + b;
    return c;
}

void gm()
{
    cout << "\nHello User! Good Morning :)\n"<<endl;
}