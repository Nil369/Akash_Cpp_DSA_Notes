#include <iostream>
#include <string>
using namespace std;

int main() {
    string sugar;

    do{        
        cout << "Enter the number of cups of sugar (type\"enough\" to stop): ";
        getline(cin, sugar);

    } while (sugar!="enough");
    
    cout << "Alright, your tea is sweet enough!" << endl;

    return 0;
}
