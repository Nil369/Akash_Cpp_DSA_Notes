#include <iostream>
using namespace std;

// A lambda function is an anonymous function that can be defined inline using the [] syntax.
// They’re useful for short, simple functions.

int main() {

    // Lambda function to prepare chai
    // The auto keyword in C++ is used to automatically deduce the type of a variable at compile time based on the value it is assigned. 

    auto prepareChai = [](int cups) {
        cout << "Preparing " << cups << " cups of chai." << endl;
    };

    // The auto keyword deduces the type of the lambda function.
    // Lambda functions in C++ have unique and complex types that are not easily written explicitly. 
    // Using auto simplifies the code by letting the compiler handle the type.

    prepareChai(2);  // Calling lambda function
    
    return 0;
}