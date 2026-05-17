#include <iostream>
using namespace std;

int main(){
    char grade; //varaiable declare kiya hai
    cout <<"Enter your Grade: A, B, C, D, F "; // screen per print karta hai
    cin >> grade; // user se input leta hai

    switch (grade)
    {
    case 'A':
    case 'a':
        cout << "Excellent";
        break; // ye code ko yaha per rok deta hdeta hai agar condition fulfill hu jaye

    case 'B':
    case 'b':
        cout << "Very Good";
        break;

    case 'C': // caital C or small c dono ko ham ne case main include kiya hai ta ke problem na hu
    case 'c': 
        cout << "Good";
        break;

    case 'D':
    case 'd':
        cout << "Pass";
        break;

    case 'F':
    case 'f':
        cout << "Fail";
        break;

    default: // agar koi bhi condition fulfill na hu to use ye messgae mile ga
    cout << "Invalid Grade";
        break;
    }
    
    return 0; // program end hota hai yaha
}
