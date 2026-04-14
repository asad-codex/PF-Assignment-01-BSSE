#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int package;
    double gigabytes, totalDue;

    cout << "Enter the package purchased (1, 2, or 3): ";
    cin >> package;

    // Formatting for currency
    cout << fixed << showpoint << setprecision(2);

    if (package == 1) {
        cout << "Enter the number of gigabytes used: ";
        cin >> gigabytes;
        totalDue = 39.99;
        if (gigabytes > 4) {
            totalDue += (gigabytes - 4) * 10.00;
        }
        cout << "The total amount due is: $" << totalDue << endl;
    } 
    else if (package == 2) {
        cout << "Enter the number of gigabytes used: ";
        cin >> gigabytes;
        totalDue = 59.99;
        if (gigabytes > 8) {
            totalDue += (gigabytes - 8) * 5.00;
        }
        cout << "The total amount due is: $" << totalDue << endl;
    } 
    else if (package == 3) {
        // Package 3 is unlimited, so gigabytes used doesn't change the price
        totalDue = 69.99;
        cout << "The total amount due is: $" << totalDue << endl;
    } 
    else {
        cout << "Invalid package selection!" << endl;
    }

    return 0;
}