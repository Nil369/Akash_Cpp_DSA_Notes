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

    // Methods / Memeber Functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "subject: " << subject << endl;
        cout << "dept: " << dept << endl;
        cout << "salary: Rs. " << salary << endl;
    }
};

class Employee
{

private:
    double salary;

public:
    string name;
    int id;

    // Setter functions
    void setSal(double sal)
    {
        salary = sal;
    }

    //Getter functions
    // void getSal() {
    // cout<<"Salary: "<<sal;
    // }
    void getSal();

    void getInfo()
    {
        cout << "\nname: " << name << endl;
        cout<<"id: " << id << endl;
    }
};

void Employee::getSal(){
    cout<<"Salary: "<<salary<<endl;
}
int main()
{
    Teacher t1;
    t1.name = "Akash";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.salary = 500000;
    t1.getInfo();

    Employee e1;
    e1.name = "John";
    e1.id = 69;
    e1.setSal(60000);
    e1.getInfo();
    e1.getSal(); 
    
    return 0;
}