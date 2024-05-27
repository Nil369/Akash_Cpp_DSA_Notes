#include <iostream>
#include <string>
using namespace std;

// f(x) = x^2 + 2
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

class Employee
{
public:
    string name;
    int salary;

    Employee(string name, int salary, int sp)
    {
        this->name = name;
        this->salary = salary;
        this->secretPassword = sp;
    }

    void getSecretPassword()
    {

        cout << "The Secret Password of the Employee is: " << this->secretPassword;
    }

    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary << " Dollars" << endl;
    }

private:
    int secretPassword;
};

class Programmer : public Employee
{
public:
    int errors;
};

int main()
{ /*================================Print============================*/
    // cout<<"Hello world\n"<<end1;
    // cout<<"Next line";
    // int a, b, c;
    // short sa=9;
    // cout<<sa;

    // ========================camelCase Notation=================
    //  int marksInMaths=83;
    //  cout<<"The marks of the student in maths is "<<marksInMaths;

    // string Akash = "Akash"
    // short a;
    // int b= 89;
    // long c;
    // long long d;
    // float const score = 45.32;
    // double score2 = 45.322;
    // long double score3 = 45.332;
    // score = 34.2;
    // // b = 34;
    // cout<<"The score is "<<score;

    /*************************Taking Input*****************************/
    // int a, b;
    // cout<<"Enter 1st number: ";
    // cin>> a;

    // cout<<"Enter 2nd number: ";
    // cin>> b;

    // cout<<"\nThe sum is: "<<a + b;
    // cout<<"\nThe diffrence is: "<<a - b;
    // cout<<"\nThe multiplication is: "<<a * b;
    // cout<<"\nThe division is: "<<(a / b);
    // cout<<"\nThe remainder is is: "<<(a % b);
    // cout<<"\nThe average is: "<<(a + b)/2;

    /*====================If-else/Conditional Statement============*/

    // int age;
    // cout << "Enter your age: ";
    // cin >> age;

    // switch (age)
    // {
    // case 12:
    //     cout << "You are 12 years old" << endl;
    //     break;
    // case 18:
    //     cout << "You are 18 years old" << endl;
    //     break;

    // default:
    //     cout << "You are neither 12 nor 18 years old";
    // }

    // if (age > 150 || age < 1)
    // {

    //     cout << "Invalid age";
    // }

    // else if (age >= 18)
    // {

    //     cout << "You can Vote";
    // }

    // else
    // {
    //     cout << "You cannot Vote ";
    // }

    /*================================== Loops ==============================*/

    // int index = 0;
    // while (index < 34)
    // {
    //     cout << "We are at index number: " << index << endl;
    //     index = index + 1;
    // }

    //    do
    // {
    //     cout << "We are at index number " << index << endl;
    //     index = index + 1;
    // } while (index < 33);

    // for (int i = 0; i < 1000; i++)
    // {
    //     cout<<"The value of i is: "<<i<<endl;
    // }

    // int a, b;
    // cout << "Enter first number" << endl;
    // cin >> a;

    // cout << "Enter second number" << endl;
    // cin >> b;
    // cout << "The function returned " << add(a, b);

    // int arr[] = {1, 3, 6};
    // Array Index   0  1  2
    //     // cout<<arr[1];
    //     int marks[6];

    //     for (int i = 0; i < 6; i++)
    //     {
    //         cout<<"Enter the marks of "<<i<<"th student"<<endl;
    //         cin>>marks[i];
    //     }

    //     for (int i = 0; i < 6; i++)
    //     {
    //         cout<<"Marks of "<<i<<"th student is "<<marks[i]<<endl;
    //     }

    // int arr2d[2][3] = {  {1,2,3},
    //                      {4,5,6}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"The value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
    //     }

    // }

    // int a =343;
    // float b = 87.94;
    // cout<<(float) a/34<<endl;

    // cout<<(int) b;

    /*======================String===================*/

    string name = "akash";
    cout << "The name is " << name << endl;
    cout << "The length of name is " << name.length() << endl;
    cout << "The name is " << name.substr(1, 155) << endl;

    /*=================Pointer=======================*/
    // float a = 34.34;
    // float* ptra;
    // ptra = &a;
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of a is "<<*ptra<<endl;
    // cout<<"The address of a is "<<&a<<endl;
    // cout<<"The address of a is "<<ptra<<endl;

    /*===============Object Oriented Programming & Classes==================*/

    Employee har("Akash constructor", 344, 324456);
    // har.name = "Akash";
    // har.salary = 100;
    har.printDetails();
    har.getSecretPassword();
    // cout<<har.secretPassword;
    // cout << "The name of our first employee is " << har.name << " and his salary is " << har.salary << " Dollars" << endl;

    return 0;
}