// This program demonstrates that changes to a function parameter
// have no effect on the original argument. 
#include <iostream>
using namespace std;

// Function Prototype
void changeMe(int);

int main()
{
    int number = 12;

    // Display the value in number.
    cout << "The number variable is " << number << endl;

    // Call changeMe, passing the value in number
    // as an argument. 
    changeMe(number);

    // Display the value in number again. 
    cout << "Now, back in main again, the value of the variable number is " << number << endl;
    return 0;

}


/*
*********************************************************************
* Definitiuon of the function changeMe.                             *
* This function changes the value of the prameter myValue           *
*********************************************************************
*/

void changeMe(int myValue)
{
    // Change the value of my value to 0. 
    myValue += 2;  // Originally this show only that the value of myValue was 0 I just make a small change to confirm that the value that comes in to the function is 12, the one in the variable number from main
                   // Still the change is only made here due to the argument is passed by value. 

    // Display the value in myValue label - The profesor called this more like a label to represent the variable
    cout << "Now the value inside the function is " << myValue << endl;
}