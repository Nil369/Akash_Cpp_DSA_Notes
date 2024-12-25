#include <iostream>
#include <string>
using namespace std;

int main() {
    string daysOfWeek[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    string mealTimes[3] = {"Breakfast", "Lunch", "Dinner"};

    // Outer loop for days of the week
    for (int i = 0; i < 7; i++) {
        cout << "Day: " << daysOfWeek[i] << endl;

        // Inner loop for meal times
        for (int j = 0; j < 3; j++) {
            cout << "  Brewing 2 cups of tea for " << mealTimes[j] << endl;
        }

        cout << endl; // Blank line between days
    }

    return 0;
}
