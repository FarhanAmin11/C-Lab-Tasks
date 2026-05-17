#include <iostream>
using namespace std;

int main() {
    double voltage, current, resistance; // variable declare kya hai

    cout << "Enter voltage (V): ";
    cin >> voltage; // voltage ka input leta hai user se

    cout << "Enter current (I): ";
    cin >> current; // current ka input leta hai user se

    resistance = voltage / current; // resistancle calculate karta hai

    cout << "Voltage: " << voltage << " V" << endl;
    cout << "Current: " << current << " A" << endl;
    cout << "Resistance: " << resistance << " Ohms" << endl;

    return 0; // proram khatam hota hai yaha
}
