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

void greeting();

int main()
{
    CurrentDate today;
    string person;
    int *ptr;
    
    greeting();


    return 0;
}


void greeting()
{
    string name;
    cout << "\t\tWelcome!\n";
    cout << "\tI'll try to guess your age.\n";
    cout << "\tPlease tell me your name: ";
    cin >> name; 
    cout << endl;
    cout << "Thanks " << name << endl;

}
