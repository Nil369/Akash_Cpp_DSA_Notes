#include <iostream>
#include <string>
using namespace std;

int main() {
    string teaTypes[5] = {"Green Tea", "Black Tea", "Herbal Tea", "Oolong Tea", "No Tea"};

    for (int i=0; i<5; i++) {
        if (teaTypes[i] == "Herbal Tea") {
            continue; // Skip serving Herbal Tea
        }
        if (teaTypes[i] == "No Tea") {
            cout << "No more tea to serve. Stopping!" << endl;
            break; // Stop when encountering No Tea
        }

        cout << "Serving " << teaTypes[i] << endl;
    }

    return 0;
}
