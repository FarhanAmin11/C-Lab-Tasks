#include <iostream>
using namespace std;

int main() {
    int day;

    // ye user se input number leta hai
    cout << "Enter a number between 1 and 7: ";
    cin >> day;

    // is se ham din ka fesla kare ge
    switch(day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid Expression";
    }

    return 0; 
}
