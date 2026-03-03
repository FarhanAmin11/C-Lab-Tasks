#include <iostream>
using namespace std;

int main() {
    float radius, area;
    const float PI = 3.1416;

    // Input radius from user
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate area
    area = PI * radius * radius;

    // Display result
    cout << "Area of the circle = " << area << endl;

    return 0;
}