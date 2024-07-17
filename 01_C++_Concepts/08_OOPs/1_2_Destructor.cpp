#include <iostream>
#include <string>
using namespace std;

class Student{
public:
string name;
double* cgpaPtr;

Student(string name, double cgpa){
    this->name = name;
    cgpaPtr = new double;
    *cgpaPtr = cgpa;
}

//Destructor
    ~Student(){
        cout<<"Hi! I'm destructor..I delete everything...\n";
        delete cgpaPtr;
    }
void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
        
    }

};
int main()
{
   Student s1("Shruti",8.8);
  s1.getInfo();
    
    return 0;
}
