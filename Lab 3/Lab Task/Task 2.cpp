#include <iostream>
using namespace std;

int main()
{
    float u, a, t, v;  // initial velocity, acceleration, time, final velocity

    // user se input leta hai
    cout << "Enter initial velocity (u): ";
    cin >> u; // input ko variable main store karta hai
    cout << "Enter acceleration (a): ";
    cin >> a; // input ko variable main store karta hai
    cout << "Enter time (t): ";
    cin >> t; // input ko variable main store karta hai

    v = u + (a * t);  //final velocity calculate karta hai

    // value display karta hai
    cout << "Initial velocity (u) = " << u << " m/s" << endl;
    cout << "Acceleration (a) = " << a << " m/s�" << endl;
    cout << "Time (t) = " << t << " s" << endl;
    cout << "Final velocity (v) = " << v << " m/s" << endl;

    return 0;  // program end karta hai
}
