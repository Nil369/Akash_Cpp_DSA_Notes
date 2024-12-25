// Syntax:
//   (type) value

# include <iostream>
using namespace std;

int main(){

    //Explicit TypeCasting
    float bookPrice = 498.99;
    int roundedBookPrice = (int) bookPrice;

    cout << "Rounded book price: Rs." << roundedBookPrice << endl;

    //Implicit TypeCasting
    int bookQuantity = 2;
    int totalPrice = bookPrice * bookQuantity;
    cout << "Total price: Rs." << totalPrice << endl;


    return 0;
}