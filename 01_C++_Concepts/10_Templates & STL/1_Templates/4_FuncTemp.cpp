#include<iostream>
using namespace std;
 
template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg= (a+b)/2.0; 
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    float a;
    a = funcAverage(5,2);
    cout<<a<<endl;
    int x,y;

    cout<<"\nEnter 2 number to swap: ";
    cin>>x>>y;
    swapp(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}
