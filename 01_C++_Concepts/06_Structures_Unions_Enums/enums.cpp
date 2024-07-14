#include <iostream>

using namespace std;

// Enumeration for days of the week
enum Week {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    // Declare a variable of type Week
    Week today = Wednesday;

    // Print the day
    cout << "Today is: " << today << endl;

    return 0;
}
