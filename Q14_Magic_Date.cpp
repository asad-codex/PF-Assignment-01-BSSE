#include <iostream>
using namespace std;

int main() {
    int month, day, year;

    // Taking inputs from the user
    cout << "Enter the month (numeric): ";
    cin >> month;
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter a two-digit year: ";
    cin >> year;

    // Performing the calculation
    int product = month * day;

    cout << "\nCalculation: " << month << " * " << day << " = " << product;

    // Checking if the date is magic
    if (product == year) {
        cout << " (" << product << " is equal to " << year << ")" << endl;
        cout << "Result: MAGIC DATE!" << endl;
    } 
    else {
        cout << " (" << product << " is not equal to " << year << ")" << endl;
        cout << "Result: NOT MAGIC." << endl;
    }

    return 0;
}