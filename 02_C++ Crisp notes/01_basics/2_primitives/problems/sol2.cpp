#include <iostream>
using namespace std;

int main() {

    int teaPrice;
    cout << "Enter tea price: ";
    cin >> teaPrice;

    // Calculate increased price by 10%
    float increasedTeaPrice = (float)teaPrice + (0.1 * (float)teaPrice);

    // Round the result using explicit casting
    int roundedTeaPrice = (int)(increasedTeaPrice + 0.5);  // Adding 0.5 before casting rounds it


    cout << "Increased tea price: " << increasedTeaPrice << endl;
    cout << "Rounded tea price: " << roundedTeaPrice << endl;

    return 0;
}
