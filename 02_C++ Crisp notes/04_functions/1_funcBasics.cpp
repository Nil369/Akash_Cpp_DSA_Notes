#include <iostream>
using namespace std;

// returnType functionName(parameters) {
//     // function body
// }

/*
Return Type: Specifies the data type of the value returned by the function. Use void if no value is returned.
Function Name: Describes what the function does.
Parameters: Input values for the function (optional).
*/

// Function to check tea temperature
int checkTeaTemperature(int temperature) {
    return temperature;
}

// Every Function have 3 things -> declarining function, definining function, and calling function

// Declaring the function (prototype)
void serveChai(int cups);

// ==================================================================================================
// Function overloading: Function overloading allows multiple functions with the same name but 
// different parameter types or numbers.

void brewChai(int cups) {
    cout << "Brewing " << cups << " cups of chai." << endl;
}

void brewChai(string teaType) {
    cout << "Brewing " << teaType << "." << endl;
}

// Main Entry Point of Program
int main() {
    int temp = checkTeaTemperature(85);  // Function call
    cout << "The tea temperature is " << temp << "deg C" << endl;
    serveChai(3);  // Function call
    brewChai(3);             // Calls int version
    brewChai("Masala Chai");  // Calls string version
    return 0;
}

// Function definition is done later
void serveChai(int cups) {
    cout << "Serving " << cups << " cups of chai!" << endl;
}