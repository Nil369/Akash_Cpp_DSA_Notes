#include <iostream>
#include <string>
using namespace std;

int main(  ){

    string userTea;
    int teaQuantity;

    cout << "What would you like to order in tea? \n";
    getline(cin,userTea); //Method 1: Take input using getline() only if the variable is of string DataType

    cout << "How many cups of " << userTea << "s would you like? \n";
    cin >> teaQuantity; //Method 2: Take input using cin

    cout << "You ordered " << teaQuantity << " cups of " << userTea << " tea.\n";

    return 0;
}