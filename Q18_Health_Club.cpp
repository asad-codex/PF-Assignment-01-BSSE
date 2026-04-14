#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice, months;
    double totalCharges;

    // Displaying the Menu
    cout << "--- Health Club Membership Menu ---" << endl;
    cout << "1. Standard Adult Membership (Rs. 40.00)" << endl;
    cout << "2. Child Membership (Rs. 20.00)" << endl;
    cout << "3. Senior Citizen Membership (Rs. 30.00)" << endl;
    cout << "4. Quit the Program" << endl;
    
    cout << "\nEnter your choice (1-4): ";
    cin >> choice;

    // Formatting output for currency
    cout << fixed << showpoint << setprecision(2);

    if (choice >= 1 && choice <= 3) {
        cout << "Enter the number of months you wish to join: ";
        cin >> months;

        switch (choice) {
            case 1:
                totalCharges = months * 40.00;
                cout << "\nTotal Charges for Adult Membership: Rs. " << totalCharges << endl;
                break;
            case 2:
                totalCharges = months * 20.00;
                cout << "\nTotal Charges for Child Membership: Rs. " << totalCharges << endl;
                break;
            case 3:
                totalCharges = months * 30.00;
                cout << "\nTotal Charges for Senior Citizen Membership: Rs. " << totalCharges << endl;
                break;
        }
    } 
    else if (choice == 4) {
        cout << "Exiting the program. Thank you!" << endl;
    } 
    else {
        cout << "Invalid choice! Please run the program again and select 1-4." << endl;
    }

    return 0;
}