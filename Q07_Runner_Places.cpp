#include <iostream>
#include <string>
using namespace std;

int main() {
    string name1, name2, name3;
    double time1, time2, time3;

    cout << "Enter name of Runner 1: ";
    cin >> name1;
    cout << "Enter time for " << name1 << ": ";
    cin >> time1;

    cout << "Enter name of Runner 2: ";
    cin >> name2;
    cout << "Enter time for " << name2 << ": ";
    cin >> time2;

    cout << "Enter name of Runner 3: ";
    cin >> name3;
    cout << "Enter time for " << name3 << ": ";
    cin >> time3;

    cout << "\n--- Race Results ---\n";

    if (time1 <= time2 && time1 <= time3) {
        if (time2 <= time3) {
            cout << "1st: " << name1 << "\n2nd: " << name2 << "\n3rd: " << name3 << endl;
        } else {
            cout << "1st: " << name1 << "\n2nd: " << name3 << "\n3rd: " << name2 << endl;
        }
    } 
    else if (time2 <= time1 && time2 <= time3) {
        if (time1 <= time3) {
            cout << "1st: " << name2 << "\n2nd: " << name1 << "\n3rd: " << name3 << endl;
        } else {
            cout << "1st: " << name2 << "\n2nd: " << name3 << "\n3rd: " << name1 << endl;
        }
    } 
    else {
        if (time1 <= time2) {
            cout << "1st: " << name3 << "\n2nd: " << name1 << "\n3rd: " << name2 << endl;
        } else {
            cout << "1st: " << name3 << "\n2nd: " << name2 << "\n3rd: " << name1 << endl;
        }
    }

    return 0;
}