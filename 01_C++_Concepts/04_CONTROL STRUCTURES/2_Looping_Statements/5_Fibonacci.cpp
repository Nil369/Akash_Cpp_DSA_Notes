#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> num;

    // Variables to store Fibonacci terms
    int a = 0, b = 1, c;

    // Print Fibonacci series
    cout << "Fibonacci Series up to " << num << " terms:" << endl;
    for (int i = 0; i < num; i++) {
        if (i <= 1) {
            c = i;
        } else {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
