#include <iostream>
using namespace std;

int main(  ){

    int teaCups;
    double pricePerCup,totalPrice,discountedPrice;

    cout << "How many Tea cups do you want to have? " << endl;
    cin >> teaCups;

    cout << "Enter the price of each tea cup: ";
    cin >> pricePerCup;
    
    totalPrice = teaCups * pricePerCup;

    if(totalPrice > 100){
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted Price is: Rs. "<< discountedPrice << endl;
    }else{
        cout << "Total Price is: Rs. " << totalPrice << endl;
    }

    return 0;
}