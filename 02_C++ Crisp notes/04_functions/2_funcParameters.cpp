#include <iostream>
using namespace std;

// Formal parameters: Defined in the function signature.
// Actual parameters: Values passed during the function call.
// Default parameters: Parameters with default values if none are passed.


int globalChaiStock = 100;  // Global variable

// Variables declared inside a function have local scope (accessible only within the function).
// Variables declared outside all functions have global scope (accessible from any function).


// Function with default parameter
void serveChai(string teaType = "Masala Chai") {
    cout << "Serving " << teaType << endl;
}

void serveTea() {
    int localCups = 5;  // Local variable
    cout << "Serving " << localCups << " cups from " << globalChaiStock << " total stock." << endl;
}

int main() {
    serveTea();               
    serveChai();    // Uses default parameter
    serveChai("Green Chai");    // Uses actual parameter
    return 0;
}