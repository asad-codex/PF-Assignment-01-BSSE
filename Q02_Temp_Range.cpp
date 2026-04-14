#include <iostream>
using namespace std;
int main() {
    int temperature;
    cout <<"Enter the temperature: ";
    cin>>temperature;
    if(temperature >= -50 && temperature <= 150){
        cout<<"The number is valid" <<endl;
    }
    else {
        cout<<"The number is Invalid" <<endl;
    }
    return 0;
}