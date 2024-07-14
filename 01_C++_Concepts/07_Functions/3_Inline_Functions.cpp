/*Inline functions are used to reduce the function call. 
When one function is being called multiply times in the program 
it increases the execution time, so inline function is used to reduce time and increase program efficiency. 
If the inline function is being used when the function is called, the inline function expands the whole function 
code at the point of a function call, instead of running the function. Inline functions are considered to be used
when the function is small otherwise it will not perform well. Inline is not recommended when static variables are
being used in the function. An example of an inline function is shown in Code Snippet 1.

inline int product(int a, int b){
    return a*b;
}
*/

#include<iostream>
using namespace std;

inline int product(int a, int b){
    // Not recommended to use below lines with inline functions
    // static int c=0; // This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained
    return a*b;
}

float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}

// int strlen(const char *p){

// }
int main(){
    int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";
    return 0;
}
