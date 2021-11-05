// This program should convert from Celsius to Fahrenheit. 
#include <iostream>
using namespace std;

int main()
{
    double faren, celsi;

    cout << "I'll help you with convertion from Celsius to Fahrenheit.\n";
    cout << "Enter the temperature in celsius: ";
    cin >> celsi;
    faren = (9 / 5 * celsi) + 32;

    cout << "For that temperature, " << celsi << " in celsius, the convertion is " << faren << " in fahrenheit." << endl;

    return 0;

}