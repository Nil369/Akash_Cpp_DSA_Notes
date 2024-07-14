#include<iostream>
using namespace std;

int main(){
    // Array Example
    int marks[] = {23, 45, 56, 89};

    marks[2] = 455;
    cout<<"These are marks"<<endl;

 
    int* p = marks;

    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;
    
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
    
    return 0;
}