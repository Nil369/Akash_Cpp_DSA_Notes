/*
Input Format

You will be given two positive integers, a and b  (a<=b), separated by a newline.

Output Format

For each integer n in the inclusive interval[a,b] :

If ,1<=n<=9 then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".
Note: 

Sample Input:
8
11

Sample Output:
eight
nine
even
odd

*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // Array to store English representations of numbers from 1 to 9
    string numToStr[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

    // Iterate through the range [a, b]
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // Print English representation for numbers 1 to 9
            cout << numToStr[i] << endl;
        } else {
            // Print "even" for even numbers and "odd" for odd numbers
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}
