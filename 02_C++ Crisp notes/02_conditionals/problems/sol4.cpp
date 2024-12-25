#include <iostream>
using namespace std;

int main() {
    int method;

    // Prompt user for input
    cout << "Select a tea brewing method:\n";
    cout << "1: Boiling\n";
    cout << "2: Steeping\n";
    cout << "3: Iced Tea\n";
    cout << "Enter your choice: ";
    cin >> method;

    // Use a switch statement to display brewing instructions
    switch (method) {
        case 1:
            cout << "Boiling: Bring water to a boil, add tea leaves, and simmer for 3-5 minutes." << endl;
            break;
        case 2:
            cout << "Steeping: Heat water to 80-90°C, pour over tea, and steep for 2-3 minutes." << endl;
            break;
        case 3:
            cout << "Iced Tea: Brew tea, let it cool, add ice cubes, and serve chilled." << endl;
            break;
        default:
            cout << "Invalid selection. Please choose 1, 2, or 3." << endl;
    }

    return 0;
}
