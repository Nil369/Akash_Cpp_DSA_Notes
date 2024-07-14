#include<iostream> 

using namespace std;

int c = 45;

int main(){
    
    // *************Build in Data types****************
    int a, b, c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c = a + b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c;

    // ************* Float, double and long double Literals****************
    float d=34.4F;
    long double e = 34.4L; 
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;  

    // *************Reference Variables**************** 
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    // *************Typecasting**************** 
    int a1 = 45;   
    float b1 = 45.46;
    cout<<"The value of a is "<<(float)a1<<endl;
    cout<<"The value of a is "<<float(a1)<<endl;

    cout<<"The value of b is "<<(int)b1<<endl;
    cout<<"The value of b is "<<int(b1)<<endl;
    int c1 = int(b1);

    cout<<"The expression is "<<a1 + b1<<endl;
    cout<<"The expression is "<<a1 + int(b1)<<endl;
    cout<<"The expression is "<<a1 + (int)b1<<endl;


    return 0;
}
