#include <iostream>
using namespace std;

int main() {
    float radius, area; // variable declare kiya hai
    const float PI = 3.1416; // variable declare kiya hai

    // user se input leta hai
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // area calculate karta hai 
    area = PI * radius * radius;

    // result display karta hai
    cout << "Area of the circle = " << area << endl;

    return 0; // program end karta hai
}