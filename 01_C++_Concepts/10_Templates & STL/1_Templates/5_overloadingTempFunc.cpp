#include <iostream>
using namespace std;
 
template <class T>
class Akash
{
public:
    T data;
    Akash(T a)
    {
        data = a;
    }
    void display();
};
 
template <class T>
void Akash<T> :: display(){
    cout<<data;
}

void func(int a){
    cout<<"\nI am first func() "<<a<<endl;
}
 
template<class T>
void func1(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main()
{
    Akash<int> h(5.7);
    cout << h.data << endl;
    h.display();

    func(4);  //Exact match takes the highest priority
    func1(4);  //Exact match takes the highest priority
    return 0;
}
