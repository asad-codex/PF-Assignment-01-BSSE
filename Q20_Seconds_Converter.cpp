#include <iostream>
using namespace std;

int main() {
    long seconds;

    cout << "Enter the number of seconds: ";
    cin >> seconds;

    if (seconds >= 86400) {
        double days = seconds / 86400.0;
        cout << "There are " << days << " days in " << seconds << " seconds." << endl;
    }
    else if (seconds >= 3600) {
        double hours = seconds / 3600.0;
        cout << "There are " << hours << " hours in " << seconds << " seconds." << endl;
    }
    else if (seconds >= 60) {
        double minutes = seconds / 60.0;
        cout << "There are " << minutes << " minutes in " << seconds << " seconds." << endl;
    }
    else {
        cout << "The time is " << seconds << " seconds (less than a minute)." << endl;
    }

    return 0;
}