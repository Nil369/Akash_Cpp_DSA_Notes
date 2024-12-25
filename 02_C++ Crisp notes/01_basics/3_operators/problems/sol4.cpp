#include <iostream>
using namespace std;

int main() {
    int stock = 1 | 2 | 4; // Stock encoded (1: Green, 2: Black, 4: Oolong)
    int teaType;

    cout << "Enter tea type to check availability (1: Green, 2: Black, 4: Oolong): ";
    cin >> teaType;

    if (stock & teaType) {
        cout << "The tea type is in stock!" << endl;
    } else {
        cout << "The tea type is not in stock!" << endl;
    }

    return 0;
}
