#include <iostream>

using namespace std;

int main(){

    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    if(age>=18) cout << "You are allowed to purchase Tea!";
    else cout << "You are too young to purchase Tea!";
    

    return 0;
}