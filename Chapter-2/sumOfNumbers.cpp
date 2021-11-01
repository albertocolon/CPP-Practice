// This program is made to sum two numbers and display the total. 

#include <iostream>
using namespace std;

int main()
{
    int num1;       // This are the variables to store the values of the numbers entered by the user.
    int num2;       
    int total;      // This is used to calculate the tutal sum of both numbers entered by the user

    // Asking the user to input the numbers. 
    cout << "Enter a number: ";
    cin >> num1; 
    cout << endl;
    cout << "Enter the second number: ";
    cin >> num2;

    // The Sum calculation of both numbers. 
    total = num1 + num2;

    // Display the total
    cout << "Adding the number " << num1 << " with the number " << num2 << " gives us a total of " << total << "." << endl;

    return 0;


}