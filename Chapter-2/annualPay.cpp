// This program calclualtes the annual salary of an employee in a company
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Declaring the valiables need to store the values to be calculated for the annual salary.
    double payAmount;
    int payPeriods = 26;
    double annualPay;

    cout << "Enter the bi-weekly payment: $";
    cin >> payAmount;
    cout << endl;
    annualPay = payAmount * payPeriods;

    // Display the annual pay calculation. 
    cout << "Your annual pay is: $" << annualPay << "." << endl;

    return 0;

}

