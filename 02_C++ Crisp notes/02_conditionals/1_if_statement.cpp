#include <iostream>
#include <string>
using namespace std;

int main(){

    string tea;
    cout << "Enter the type of tea you want to have: ";
    getline(cin,tea);

    if(tea == "Green Tea"){
        cout << "Your order of "<<tea<< " is confirmed!"<<endl;
    }

    return 0;
}