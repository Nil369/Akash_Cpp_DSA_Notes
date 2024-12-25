#include <iostream>
using namespace std;

// Pass by value means the function receives a copy of the argument. 
// Changes made inside the function do not affect the original variable.

void pourChai(int cups) {
    cups = cups + 1;  // Modifies local copy
    cout << "Poured " << cups << " cups of chai!" << endl;
}

// Pass by reference passes the actual variable, so changes in the function affect the original variable.

void refillChai(int &cups) {  // Pass by reference
    cups += 2;
    cout << "Refilled to " << cups << " cups of chai!" << endl;
}

int main() {
    int chaiCups = 2;
    pourChai(chaiCups);  // Passing by value
    refillChai(chaiCups);  // Passing by reference
    cout << "Total chai cups outside function: " << chaiCups << endl;
    return 0;
}