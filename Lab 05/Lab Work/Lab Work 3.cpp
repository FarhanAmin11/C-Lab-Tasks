#include <iostream>
using namespace std;

int main()
{
    int num, i = 1, sum = 0; // declaring variables

    cout << "Enter a positive integer: "; // printing message
    cin >> num; // storing the input

    while(i <= num) // starting the loop
    {
        sum = sum + i;
        i++; // incrementng
    }

    cout << "Sum = " << sum << endl; // printing the sum 

    return 0;
}
