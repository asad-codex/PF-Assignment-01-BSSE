#include <iostream>
using namespace std;

int main() {
    cout << "ASCII Values of Uppercase Alphabets:" << endl;
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        // Explicitly casting 'ch' to 'int' to get the ASCII value
        cout << ch << " : " << (int)ch << endl;
    }

    cout << "\nASCII Values of Lowercase Alphabets:" << endl;
    for (char ch = 'a'; ch <= 'z'; ch++) {
        // Using static_cast<int> is the modern C++ way of explicit casting
        cout << ch << " : " << static_cast<int>(ch) << endl;
    }

    return 0;
}