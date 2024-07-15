// Prime numbers are natural numbers that are divisible by only 1 and the number itself. 
// Write a Program to check if the number is a prime number or Not

#include <iostream>
using namespace std;

int main() {
    int num, i = 2;
    bool isPrime = true;

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is less than 2
    if (num < i) {
        isPrime = false;
    } else {
        // Check for factors from 2 to num - 1
        while (i <= num / 2) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
            i++;
        }
    }

    // Output the result
    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}
