// This program should calculate the millage per gallon based on the millage travelled
#include <iostream>
#include <string>
using namespace std;

int main()
{
    double millage, gallons, carMillage;

    cout << "Let's calculate your car gas millage./nEnter the ammount of miles traveled: ";
    cin >> millage;
    cout << "Now enter the gallons you filled it up with: ";
    cin >> gallons;

    carMillage = millage / gallons;

    cout << "Based on the info provided your car's gas millage is, " << carMillage << "." << endl;

    return 0;
}