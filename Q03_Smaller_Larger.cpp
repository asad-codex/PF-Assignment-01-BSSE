#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " is the larger number." << endl;
        cout << num2 << " is the smaller number." << endl;
    } 
    else if (num2 > num1) {
        cout << num2 << " is the larger number." << endl;
        cout << num1 << " is the smaller number." << endl;
    } 
    else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}