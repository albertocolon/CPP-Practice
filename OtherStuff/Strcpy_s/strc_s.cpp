#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char occupationOne[50] = "Nurse";
    char occupationZero[50];

    // cin.getline(txt1, sizeof(txt1));
    strcpy(occupationZero, occupationOne);

    cout << "Rose is a " << occupationZero << endl;

    return 0;

}