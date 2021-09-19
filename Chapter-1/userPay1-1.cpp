#include <iostream>
using namespace std;

int main()
{
    double hours, rate, pay;

    cout << "Enter the hours worked: ";
    cin >> hours;

    cout << "Enter your hourly pay rate: ";
    cin >> rate;

    pay = hours * rate;

    cout << "You have earned $" << pay << " for the amount of hours claimed." << endl;
    return 0; 
}