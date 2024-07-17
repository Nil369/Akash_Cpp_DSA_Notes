#include <iostream>
#include <string>
using namespace std;

class Accounts {
private:
    double balance;
    string password; // data-hiding

public:
    string accountId;
    string username;

    // Constructor
    Accounts(string accId, string user, double bal, string pwd) {
        accountId = accId;
        username = user;
        balance = bal;
        password = pwd;
    }

    // Getter for balance
    double getBalance() {
        return balance;
    }

    // Setter for balance
    void setBalance(double newBalance) {
        if (newBalance >= 0) {
            balance = newBalance;
        } else {
            cout << "Invalid balance amount!" << endl;
        }
    }


    // Function to display account details (excluding password)
    void displayAccountDetails() {
        cout << "Account ID: " << accountId << endl;
        cout << "Username: " << username << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Creating an object of the Accounts class
    Accounts account1("123456789", "JohnDoe", 1000.0, "securepassword");

    // Displaying account details
    account1.displayAccountDetails();

    // Modifying the balance
    account1.setBalance(1500.0);
    cout << "Updated Balance: $" << account1.getBalance() << endl;
    return 0;
}
