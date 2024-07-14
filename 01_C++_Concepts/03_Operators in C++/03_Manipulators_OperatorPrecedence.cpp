#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a = 34; 
    cout<<"The value of a was: "<<a;
    a = 45; 
    cout<<"The value of a is: "<<a;

    // Constants in C++ :
    const int a1 = 3;
    cout<<"The value of a was: "<<a1<<endl;
    // a1 = 45; // You will get an error because a is a constant
    cout<<"The value of a is: "<<a1<<endl;

    // Manipulators in C++
    int a2 =3, b2=78, c2=1233;
    cout<<"The value of a without setw is: "<<a2<<endl;
    cout<<"The value of b without setw is: "<<b2<<endl;
    cout<<"The value of c without setw is: "<<c2<<endl;

    cout<<"The value of a is: "<<setw(4)<<a2<<endl;
    cout<<"The value of b is: "<<setw(4)<<b2<<endl;
    cout<<"The value of c is: "<<setw(4)<<c2<<endl;


    // Operator Precedence: 
    /*
    Operator precedence specifies the order of operations in expressions that contain more than one operator. 
    
    In Programming Languages, the associativity of an operator is a property that determines how operators
    of same precedence are grouped together in the absence of parenthesis.
    
    */

    int a3 =3, b3=4;
    // int c = (a*5)+b;
    int c = ((((a3*5)+b3)-45)+87);
    cout<<c;
    return 0;
}
