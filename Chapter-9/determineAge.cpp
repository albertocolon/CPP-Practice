
#include <iostream>
#include <string>
using namespace std;

//void greetings();
//int gateDate(int, int, int);
//int gateAge(int, int);

int main()
{
    int currentDateDay, currentDateMonth, currentDateYear, birthDateDay, birthDateMonth, birthDateYear, age;
    //int currentDate, birthDate;
    // int *ptr1 = nullptr, *ptr2 = nullptr, *ptr3 = nullptr;
    string name;

    cout << "Greetings, I will try to calculate your age besed on your birthdate.\n";
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Thanks!" << endl;
    cout << "Now, enter todays date by entering the day first: ";
    cin >> currentDateDay;
    while (currentDateDay < 1 && currentDateDay > 31)
        {
            cout << "Invalid day entry. Please try again: ";
            cin >> currentDateDay;
        }
    cout << "Now enter the current month: ";
    cin >> currentDateMonth;
    while (currentDateMonth < 1 && currentDateMonth > 12)
        {
            cout << "Invalid month entry. Please try again: ";
            cin >> currentDateMonth;
        }
    cout << "Now enter the current year: ";
    cin >> currentDateYear;
    while (currentDateYear < 1800 && currentDateYear > 2099)
        {
            cout << "Invalid year entry. Please, try again: ";
            cin >> currentDateYear;
        }

    cout << "Now, let's enter your birth date.\n";
    cout << "Enter your birth day: ";
    cin >> birthDateDay;
    while (birthDateDay < 1 && birthDateDay > 31)
        {
            cout << "Invalid birth day entry. Please try again: ";
            cin >> birthDateDay;
        }
    cout << "Now enter the birth month: ";
    cin >> birthDateMonth;
    while (birthDateMonth < 1 && birthDateMonth > 12)
        {
            cout << "Invalid birth month entry. Please try again: ";
            cin >> birthDateMonth;
        }
    cout << "Now enter the birth year: ";
    cin >> birthDateYear;
    while (birthDateYear < 1800 && birthDateYear > 2099)
        {
            cout << "Invalid  birth year entry. Please, try again: ";
            cin >> birthDateYear;
        }
    age = currentDateYear - birthDateYear;

    cout << "Hello " << name << ", you are " << age << " old." << endl; 
    
    return 0;
    
}
