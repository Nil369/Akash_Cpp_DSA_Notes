#include <iostream>
#include <string>

using namespace std;

// Union to store different types of student data
union Student {
    int roll_number;
    double marks;
};

int main() {
    // Create a student union variable
    union Student student;

    // Assign value to roll_number
    student.roll_number = 101;
    cout << "Student Roll Number: " << student.roll_number << endl;

    // Assign value to marks
    student.marks = 95.5;
    cout << "Student Marks: " << student.marks << endl;

    return 0;
}
