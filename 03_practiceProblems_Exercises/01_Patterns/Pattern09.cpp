/*Print this Pattern:

        ******
        *    *
        *    *
        ******
*/

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter a number: ";
    cin >> rows;

    // Define the width of the rectangle
    int width = rows + 2; // Adjust the width as needed

    // Loop through each row
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < width; j++) {
            // Print stars for the first and last rows
            if (i == 0 || i == rows - 1) {
                cout << "*";
            } else {
                // Print stars for the first and last columns of middle rows
                if (j == 0 || j == width - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
