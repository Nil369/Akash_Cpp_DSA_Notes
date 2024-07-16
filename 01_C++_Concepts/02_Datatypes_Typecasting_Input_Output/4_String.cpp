/*
A string is an array of characters terminated a null character '\0'. Unlike in C, we can define a string variable 
and not necessarily a character array to store a sequence of characters. Data of the same type are stored in 
an array, for example, integers can be stored in an integer array, similarly, a group of characters can be stored
in a character array or a string variable. A string is a one-dimensional array of characters.

SYNTAX: 
    string string_name ;
    string string_name = "AKASH" ;
*/

#include <iostream>
#include <string>
using namespace std;
 
int main( )
{
    // declare and initialise string
    string str = "Akash Halder";
    cout << str << endl;
    return 0;
}
