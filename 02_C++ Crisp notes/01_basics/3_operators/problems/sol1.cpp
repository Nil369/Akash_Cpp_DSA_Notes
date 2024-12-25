#include <iostream>
using namespace std;

int main(  ){

    int teaPacks;
    double pricePerPack, totalPrice, finalCost;

    cout << "Enter the number of Tea Packs you want: ";
    cin>> teaPacks;

    cout<<"Enter the price per tea pack: ";
    cin>> pricePerPack;

    totalPrice = teaPacks * pricePerPack;
    finalCost = totalPrice + (0.1*totalPrice);

    cout<< "Total Price after adding Tax: "<<finalCost<<endl;

    return 0;
}