#include <iostream>
#include <string>
using namespace std;

struct CurrentDate {
    int cYear;
    int cMonth;
    int cDay;
};

struct BirthDate {
    int bYear;
    int bMonth;
    int bDay;
};

string greeting();
bool validteData();

int main()
{
    CurrentDate today;
    string person;
    int *ptr = nullptr;
    
    person = greeting();
    cout << "Now, please provide today's date.\n";
    cout << "First provide the current year: ";
    cin >> today.cYear;





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
