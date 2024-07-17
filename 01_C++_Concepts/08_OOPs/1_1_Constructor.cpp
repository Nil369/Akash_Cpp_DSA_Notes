#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    // Properties / Attributes
    string name;
    string dept;
    string subject;
    double salary;

    // Non - Parameterized Constructor
    Teacher(){
        cout<<"Hi! I'm a Teacher"<<endl;
    }

    // Parameterized Constructor
    Teacher(string n, string s, string d, double sal){
        name = n;
        subject = s;
        dept = d;
        salary = sal;
    }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"subject: "<<subject<<endl;
        cout<<"dept: "<<dept<<endl;
        cout<<"salary: Rs. "<<salary<<endl;
    }
};


class Student{
public:
string name;
double* cgpaPtr;

// Dynmaic Memory Allocation && Deep Copy
Student(string name, double cgpa){
    this->name = name;
    cgpaPtr = new double;
    *cgpaPtr = cgpa;
}
Student(Student &obj){
 this->name = obj.name;
 cgpaPtr = new double;
 *cgpaPtr = *obj.cgpaPtr;
}

void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
        
    }

};


int main()
{
   Student s1("Shruti",8.8);
   Student s2(s1);

   s1.getInfo();
   *(s2.cgpaPtr) = 9.2;
   s2.name = "Akash";
   s2.getInfo();
    
    return 0;
}

