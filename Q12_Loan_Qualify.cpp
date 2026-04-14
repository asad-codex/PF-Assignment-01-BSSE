#include <iostream>
using namespace std;

int main() {
    double income;
    int years;

    cout << "Enter your annual income: ";
    cin >> income;

    cout << "Enter years at current employment: ";
    cin >> years;

    if (income >= 35000.00 && years > 5) {
        cout << "Congratulations! You qualify for the special loan." << endl;
    } 
    else {
        cout << "Sorry, you do not qualify for the loan at this time." << endl;
    }

    return 0;
}