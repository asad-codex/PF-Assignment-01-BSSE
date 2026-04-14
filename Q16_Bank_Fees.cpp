#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double balance, checkFees, totalFees;
    int numChecks;
    const double MONTHLY_CHARGE = 10.00;

    cout << "Enter the beginning balance: $";
    cin >> balance;
    cout << "Enter the number of checks written: ";
    cin >> numChecks;

    // 1. Initial Monthly Charge
    totalFees = MONTHLY_CHARGE;

    // 2. Check for Low Balance Penalty
    if (balance < 400) {
        totalFees += 15.00;
    }

    // 3. Determine Check Fees based on quantity
    if (numChecks < 20) {
        checkFees = numChecks * 0.10;
    } 
    else if (numChecks >= 20 && numChecks <= 39) {
        checkFees = numChecks * 0.08;
    } 
    else if (numChecks >= 40 && numChecks <= 59) {
        checkFees = numChecks * 0.06;
    } 
    else {
        checkFees = numChecks * 0.04;
    }

    // 4. Calculate Final Total
    totalFees += checkFees;

    // 5. Display the result
    cout << fixed << showpoint << setprecision(2);
    cout << "\n--- Monthly Statement ---" << endl;
    cout << "Total service fees for the month: $" << totalFees << endl;

    return 0;
}