#include <iostream>
#include <iomanip>
using namespace std;

double fivePercentCont(double);
double sevenPercentCont(double);
double tenPercentCont(double);
void menu();

int main()
{
    double monPay, fivePer, sevenPer, tenPer;
    int choice;
    const int FIVE_PER = 1, SEVEN_PER = 2, TEN_PER = 3, QUIT_CHOICE = 4;

    cout << "This program help you know the monthly contribution based on your monthly payment and the porcentage selected.\n";
    cout << "Enter the monthly payent: $";
    cin >> monPay;
    cout << "*******************";
    cout << endl;
    
    do
    {
        menu();
        cin >> choice;
        cout << "*********************";
        cout << endl;

        while (choice < FIVE_PER || choice > QUIT_CHOICE)
        {
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }

        switch (choice)
        {
            case FIVE_PER:
                fivePercentCont(monPay);
                break;
            case SEVEN_PER:
                sevenPercentCont(monPay);
                break;
            case TEN_PER:
                tenPercentCont(monPay);
                break;
        }
    } while (choice != QUIT_CHOICE);
    return 0;

}


double fivePercentCont(double mp5)
{
    double contrib5;
    contrib5 = mp5 * 0.05;
    cout << fixed << showpoint << setprecision(2);
    cout << "Selecting 5 percent contribution is: $" << contrib5 << " per month." << endl;
    return contrib5;
}

double sevenPercentCont(double mp7)
{
    double contrib7;
    contrib7 = mp7 * 0.07;
    cout << fixed << showpoint << setprecision(2);
    cout << "Selecting 7 percent contribution is: $" << contrib7 << " per month." << endl;
    return contrib7;

}
double tenPercentCont(double mp10)
{
    double contrib10;
    contrib10 = mp10 * 0.1;
    cout << fixed << showpoint << setprecision(2);
    cout << "Selecting 10 percent contribution is: $" << contrib10 << " per month." << endl;
    return contrib10;

}

void menu()
{
    cout << "\n\t\tSelection for the contribution percent\n\n"
         << "1. Five (5) percent of contribution.\n"
         << "2. Seven (7) percent of contribution.\n"
         << "3. Ten (10) percent of contribution.\n"
         << "4. Quit the program\n\n"
         << "Enter the number of your selection: ";
}

