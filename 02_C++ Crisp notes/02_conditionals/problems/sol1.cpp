#include <iostream>
#include <string>
using namespace std;

int main(){

    string favTea;
    cout << "Enter your favorite tea: ";
    getline(cin,favTea);

    if(favTea == "Oolong") cout<< "You have excellent taste!";
    

    return 0;
}