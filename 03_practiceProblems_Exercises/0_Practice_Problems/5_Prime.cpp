// Prime numbers are natural numbers that are divisible by only 1 and the number itself. 
// Write a Program to check if the number is a prime number or Not

#include <iostream>
using namespace std;

bool isPrime(int n){
    // 0->Not Prime     1-> Prime 

    for(int i=2; i<n; i++){

        // if divisible -> Not Prime
        if(n%i==0){
            return 0;
        }
        
    }
    return 1;
}

int main() {
 
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    // check if number is prime
    if (isPrime(num))
    {
        cout<<num<<" is a Prime number";
    }
    else{
        cout<<num<<" is Not a Prime number";
    }
    
    return 0;
}
