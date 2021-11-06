// This program will show yow wich is the max value number out of the 2 numbers entered.
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    // Requesting the input of the numbers. 
    cout << endl;
    cout << "Greetings. Enter two (2) deferent numbers separated by space: ";
    cin >> num1 >> num2;
    
    // Creating the loop for the maximum display to repeat

    if (num1 > num2)
        {
            cout << "The number " << num1 << " is higher than " << num2 << "." << endl;
        }
    else if (num1 == num2)
        {
            cout << "The numbers " << num1 << " and " << num2 << " are the same.";
        }
    else
            cout << "The number " << num2 << " is higher than " << num1 << "." << endl;


    return 0;
}