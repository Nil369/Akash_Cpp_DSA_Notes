#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

using namespace std;

// Employee structure definition
struct Employee {
    int id;
    string name;
    double salary;
};

// Function to display employee details
void displayEmployee(const Employee& emp) {
    cout << "ID: " << emp.id << " , Name: " << emp.name << " , Salary: $" << emp.salary << endl;
}

int main() {
    // Vector of employees
    vector<Employee> employees = {
        {101, "Akash", 100000},
        {102, "Shruti", 70000},
        {103, "Shubham", 50000},
        {104, "Anirudh", 60000},
        {105, "Aryan", 70000},
    };

    // Sort employees by salary in descending order
    sort(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2) {
        return e1.salary > e2.salary;
    });

    cout << "Employees sorted by salary (highest to lowest):\n";
    for_each(employees.begin(), employees.end(), displayEmployee);

    // Filter employees who are high earners (salary > 50,000)
    vector<Employee> highEarners;
    copy_if(
        employees.begin(),
        employees.end(),
        back_inserter(highEarners),
        [](const Employee& e) {
            return e.salary > 50000;
        }
    );

    cout << "\nHigh earners (salary > 50,000):\n";
    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

    // Calculate total salary
    double totalSalary = accumulate(employees.begin(), employees.end(), 0.0, [](double sum, const Employee& e) {
        return sum + e.salary;
    });

    cout << "\nTotal salary of all employees: $" << totalSalary << endl;

    // Calculate average salary
    double averageSalary = totalSalary / employees.size();
    cout << "Average salary: $" << averageSalary << endl;

    // Find the employee with the highest salary
    auto highestPaid = max_element(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2) {
        return e1.salary < e2.salary;
    });

    cout << "\nEmployee with the highest salary:\n";
    if (highestPaid != employees.end()) {
        displayEmployee(*highestPaid);
    }

    return 0;
}
