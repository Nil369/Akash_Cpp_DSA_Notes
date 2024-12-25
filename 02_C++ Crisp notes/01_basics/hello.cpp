//pre-processor directive
#include <iostream> //inclusive directive

using namespace std; //Method -2 
/*
A namespace in C++ is a way to organize code into logical groups and prevent name conflicts. 
Namespaces allow you to define variables, functions, and classes under a specific scope, 
which helps avoid clashes when the same name is used in different parts of a program or in external libraries.
*/
namespace myNamespace {
    void myFunc(){
        // single line comment
    }
}

//Method 3:
using std::cout;
using std::endl;

int main(){

    std::cout<<"Hello World"<<std::endl;
    std::cout<<"Method-1 without std namespace"<<std::endl;
    cout<<"Method-2 with std namespace"<<endl;

    return 0; // standard exit code for successful exit of program after successful execution of code

}