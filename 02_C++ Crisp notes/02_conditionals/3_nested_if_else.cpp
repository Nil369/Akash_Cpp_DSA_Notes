#include <iostream>
using namespace std;

int main(){

    int teaCups;
    double pricePerCup = 2.5, totalPrice, discount;

    cout<<"Enter the number of tea cups you want to have: ";
    cin>>teaCups;

    totalPrice = teaCups * pricePerCup;

    if(teaCups>20) discount= 0.20;
    else if(teaCups>=10 && teaCups<=20) discount= 0.10;
    else discount= 0;

    // totalPrice = totalPrice - (totalPrice * discount);
    totalPrice -= (totalPrice * discount);
    
    cout<<"Total price after discount is: $"<<totalPrice;

    return 0;
}