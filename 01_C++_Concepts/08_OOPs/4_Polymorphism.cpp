// 1.  Method Overloading


// #include <iostream>
// using namespace std;
// class Print {
// public:
//     void display(int i) {
//         cout << "Displaying int: " << i << endl;
//     }

//     void display(double f) {
//         cout << "Displaying float: " << f << endl;
//     }

//     void display(string s) {
//         cout << "Displaying string: " << s << endl;
//     }
// };

// int main() {
//     Print obj;
//     obj.display(5);
//     obj.display(5.5);
//     obj.display("Hello");

//     return 0;
// }



//2. OPERATOR OVERLOADING:

// #include <iostream>
// using namespace std;

// class Complex {
// private:
//     float real;
//     float imag;
// public:
//     Complex(): real(0), imag(0) {}

//     Complex operator + (const Complex &obj) {
//         Complex temp;
//         temp.real = real + obj.real;
//         temp.imag = imag + obj.imag;
//         return temp;
//     }

//     void input() {
//         cout << "Enter real and imaginary parts respectively: ";
//         cin >> real >> imag;
//     }

//     void output() {
//         if(imag < 0)
//             cout << "Output Complex number: " << real << imag << "i";
//         else
//             cout << "Output Complex number: " << real << "+" << imag << "i";
//     }
// };

// int main() {
//     Complex complex1, complex2, result;

//     cout << "Enter first complex number:\n";
//     complex1.input();

//     cout << "Enter second complex number:\n";
//     complex2.input();

//     result = complex1 + complex2;
//     result.output();

//     return 0;
// }



// VIRTUAL FUNCTIONS:

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function called" << endl;
    }

    void display() {
        cout << "Base class display function called" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show function called" << endl;
    }

    void display() {
        cout << "Derived class display function called" << endl;
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;

    // Virtual function, binded at runtime
    b->show();

    // Non-virtual function, binded at compile time
    b->display();

    return 0;
}


