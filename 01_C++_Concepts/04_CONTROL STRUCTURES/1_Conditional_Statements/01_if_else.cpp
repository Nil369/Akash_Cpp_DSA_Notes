#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    cout << "Enter your score: ";
    cin >> score;

    if (score >= 90) {
        grade = 'O';
    } else if (score >= 80) {
        grade = 'A+';
    } else if (score >= 70) {
        grade = 'A';
    } else if (score >= 60) {
        grade = 'B';
    }
    else if (score >= 50) {
        grade = 'C';
    }
    else if (score >= 40) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    cout << "Your grade is: " << grade << endl;

    return 0;
}
