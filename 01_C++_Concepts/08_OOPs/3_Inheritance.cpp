#include <iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
    Person()
    {
        cout << "I'm parent\n";
    }
};

class Student : public Person{
public:
    int roll;

    Student(string name,int age,int roll){
        this->name = name;
        this->age = age;
        this->roll = roll;
        cout << "I'm child\n";
    }
    void getInfo(){
        cout<< "name: "<< name<<endl;
        cout<< "age: "<< age<<endl;
        cout<< "rollNo: "<< roll<<endl;
    }
};

int main(){   
    Student s1("Shruti",19,418);
    s1.getInfo(); // accessing methods of both parent and child class.

    return 0;
}