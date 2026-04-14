#include <iostream>
using namespace std;

int main() {
    int choice;
    const double PI = 3.14159;

    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double radius, area;
            cout << "Enter the radius: ";
            cin >> radius;
            area = PI * radius * radius;
            cout << "The area of the circle is: " << area << endl;
            break;
        }
        case 2: {
            double length, width, area;
            cout << "Enter the length: ";
            cin >> length;
            cout << "Enter the width: ";
            cin >> width;
            area = length * width;
            cout << "The area of the rectangle is: " << area << endl;
            break;
        }
        case 3: {
            double base, height, area;
            cout << "Enter the base: ";
            cin >> base;
            cout << "Enter the height: ";
            cin >> height;
            area = base * height * 0.5;
            cout << "The area of the triangle is: " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice! Please run the program again and enter 1, 2, or 3." << endl;
    }

    return 0;
}