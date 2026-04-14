#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;

    cout << "--- Headphone Selection Menu ---" << endl;
    cout << "1. Noise Canceling" << endl;
    cout << "2. Wireless" << endl;
    cout << "3. Wired Budget" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Setting the output format for currency
    cout << fixed << showpoint << setprecision(2);

    switch (choice) {
        case 1:
            cout << "\nYou selected: Noise Canceling" << endl;
            cout << "Price: $249.00" << endl;
            break;
        case 2:
            cout << "\nYou selected: Wireless" << endl;
            cout << "Price: $199.00" << endl;
            break;
        case 3:
            cout << "\nYou selected: Wired Budget" << endl;
            cout << "Price: $49.00" << endl;
            break;
        default:
            cout << "\nInvalid selection. Please run the program again and enter 1, 2, or 3." << endl;
    }

    return 0;
}
