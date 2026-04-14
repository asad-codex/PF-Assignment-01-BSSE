#include <iostream>
using namespace std;

int main() {
    int model;

    cout << "Available TV Models: 100, 200, 300" << endl;
    cout << "Enter the model number you wish to purchase: ";
    cin >> model;

    cout << "\nFeatures for Model " << model << ":" << endl;

    switch (model) {
        case 300:
            cout << "- Picture-in-a-picture" << endl;
            cout << "- Stereo sound" << endl;
            cout << "- Remote control" << endl;
            break;
        case 200:
            cout << "- Stereo sound" << endl;
            cout << "- Remote control" << endl;
            break;
        case 100:
            cout << "- Remote control only" << endl;
            break;
        default:
            cout << "Invalid model! Please choose from 100, 200, or 300." << endl;
    }

    return 0;
}