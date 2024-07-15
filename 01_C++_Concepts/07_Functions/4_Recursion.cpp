# include <iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1)
     return 1;

    else
     return(n*factorial(n-1));
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int num;
    cout<<"Enter the number you want the factorial of: ";
    cin>>num;
    cout<<"The factorail of "<<num<<" is: "<<factorial(num);

    cout << "\nEnter the number of terms in Fibonacci series: ";
    cin >> num;

    // Print Fibonacci series
    cout << "Fibonacci Series up to " << num << " terms:" << endl;
    for (int i = 0; i < num; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}