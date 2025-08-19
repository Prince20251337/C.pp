#include <iostream>
#include <string>
using namespace std;

// Class representing a bank account
class bank {
private:
    // Private data members
    string name;
    string accno;
    string typeacc;
    double balance;

public:
    // Function to assign initial account details
    void input(string accName, string accNumber, string accType, double initialBalance) {
        name = accName;
        accno = accNumber;
        typeacc = accType;
        balance = initialBalance;
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
    }

    // Function to withdraw money with balance check
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount" << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    // Function to display account information
    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accno << endl;
        cout << "Account Type: " << typeacc << endl;
        cout << "Account Balance: " << balance << endl;
    }
};

// Main function to run the program
int main() {
    bank b;

    // Set initial details
    b.input("Prince Badola", "1234567", "Saving", 5000.0);

    // Show initial state
    b.display();

    // Deposit money
    b.deposit(1500.0);

    // Try withdrawing money
    b.withdraw(6000.0);

    // Show final state
    b.display();

    return 0;
}
