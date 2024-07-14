#include <iostream>
#include <string>

using namespace std;

// Structure to represent an employee
struct Employee {
    string name;
    int id;
    double salary;
};

int main() {
    // Create an employee object
    Employee employee1;

    // Assign values to the employee object
    employee1.name = "Akash";
    employee1.id = 12345;
    employee1.salary = 50000.0;

    // Print employee information
    cout << "Employee Information:" << endl;
    cout << "Name: " << employee1.name << endl;
    cout << "ID: " << employee1.id << endl;
    cout << "Salary: $" << employee1.salary << endl;

    return 0;
}
