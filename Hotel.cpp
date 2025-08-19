#include <iostream>
#include <string>
using namespace std;

// Class representing a hotel guest billing system
class hotel {
private:
    int rno, nod;         // Room number and number of days
    string name;          // Guest name
    int tariff;         // Daily room tariff

    // Function to calculate total bill
    float calc() {
        float total = nod * tariff;

        // If total exceeds ₹100000, apply 5% tax
        if (total > 100000) {
            total = 1.05 * total;
        }

        return total;
    }

public:
    // Function for check-in: takes guest details
    void checkin() {
        cout << "Enter the room no: ";
        cin >> rno;

        cout << "Enter the No of days: ";
        cin >> nod;

        cout << "Enter the name: ";
        cin >> name;

        cout << "Enter the Tariff: ";
        cin >> tariff;
    }

    // Function for check-out: displays the bill
    void checkout() {
        cout << "Room No: " << rno << endl;
        cout << "No of days: " << nod << endl;
        cout << "Name: " << name << endl;
        cout << "Tariff: " << tariff << endl;
        cout << "Total: " << calc() << endl;
    }
};

// Main function to run the program
int main() {
    hotel h;

    h.checkin();   // Input details
    h.checkout();  // Display the bill

    return 0;
}
