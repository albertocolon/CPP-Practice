#include <iostream>
#include <string>
using namespace std;

struct CurrentDate {     // Structure for the current date. 
    int cYear;
    int cMonth;
    int cDay;
};

struct BirthDate {    // Structure for the birth date
    int bYear;
    int bMonth;
    int bDay;
};

string greeting();                  // Prototyope function for the greeting.
bool validteData();                 // Prototype function for validation of the data entered.
void getcData(CurrentDate *);       // Fucntion to get the data for the current date structure. 
void getbData(BirthDate *);         // Fucntion to get the data for the birth date structure. 

int main()
{
    CurrentDate today;
    BirthDate birthday;
    string person;
    int *ptr = nullptr;
    
    cout << sizeof(CurrentDate) << endl;
    person = greeting();
    cout << "Now, please provide today's date.\n";
    cout << "First provide the current time data: ";
    getcData(&today);

    





    return 0;
}


string greeting()
{
    string name;
    cout << "\t\tWelcome!\n";
    cout << "\tI'll try to guess your age.\n";
    cout << "\tPlease tell me your name: ";
    cin >> name; 
    cout << endl;
    cout << "Thanks " << name << endl;
    return name;

}

void getcData(CurrentDate *c) {
  cout << "Enter current year: ";
    cin >> c->cYear;

    cout << "Enter current month: ";
    cin >> c->  cMonth;

    cout << "Enter todays date: ";
    cin >> c->cDay;

}

void getbData(BirthDate *b){
    cout << "Now enter the year your were born: ";
    cin >> b->bYear;

    cout << "Now your birth month: ";
    cin >> b-> bMonth;

    cout << "And finally enter your birth date: ";
    cin >> b->bDay;

}