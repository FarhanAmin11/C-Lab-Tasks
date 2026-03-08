#include <iostream>
using namespace std;

int main() {
    int choice; // variable declare kiya hai
    double value, result; // variable declare kiya hai

    cout << " Conversion Menu " << endl;
    cout << "1  Convert Kilometers to Meters" << endl;
    cout << "2  Convert Meters to Centimeters" << endl;
    cout << "3  Convert Kilograms to Grams" << endl;
    cout << "4  Convert Celsius to Fahrenheit" << endl;
    cout << " Enter your choice: ";
    cin >> choice; // user ki choice ko variable main store karta hai

    switch(choice) { 
        case 1:
            cout << "Enter value in Kilometers: ";
            cin >> value;
            result = value * 1000;
            cout << "Meters = " << result << endl;
            break; // ye code ko yaha per rok deta hdeta hai agar condition fulfill hu jaye

        case 2:
            cout << "Enter value in Meters: ";
            cin >> value;
            result = value * 100;
            cout << "Centimeters = " << result << endl; // user ko result deta hai
            break;

        case 3:
            cout << "Enter value in Kilograms: ";
            cin >> value;
            result = value * 1000;
            cout << "Grams = " << result << endl;
            break;

        case 4:
            cout << "Enter value in Celsius: ";
            cin >> value;
            result = (value * 9/5) + 32;
            cout << "Fahrenheit = " << result << endl;
            break;

        default: // agar koi bhi condition fulfill na hu to use ye messgae mile ga
            cout << "Invalid choice";
    }

    return 0; // program end hota hai
}