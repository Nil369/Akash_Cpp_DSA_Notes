#include <iostream>
#include <string>
using namespace std;

int main(  ){

    string favoriteTea;
    cout << "Enter your favorite tea: ";
    getline(cin, favoriteTea);

    int teaCups;
    cout << "Enter how many cups of "<<favoriteTea<<" do you want to have: ";
    cin >> teaCups;

    cout << "Here is your " << teaCups << " cup(s) of " << favoriteTea << "!" << endl;
    
    return 0;
}