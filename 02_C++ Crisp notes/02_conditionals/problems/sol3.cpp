#include <iostream>
using namespace std;

int main(){

    int temperature;
    cout << "Enter temperature in Celcius: ";
    cin >> temperature;

    if(temperature>100) cout << "Too hot!";
    else if(temperature>=80 && temperature<=100) cout << "Perfect temperature.";
    else if(temperature<80) cout << "Too cold!";
    else cout << "Invalid temperature!";

    return 0;
}