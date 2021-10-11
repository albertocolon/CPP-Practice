// This program demonstrate a function with three parameters.
#include <iostream>
using namespace std;

// Function prototype
void showSum(int, int, int); // The int here are the parameters. 

int main()
{
    int value1, value2, value3;

    // Get three integers
    cout << "Enter three integers and I will display their sum: ";
    cin >> value1 >> value2 >> value3;

    // Call showSum passun three arguments.
    showSum(value1, value2, value3);
    return 0;

}

/*
*************************************************************
* Definition of the function showSum.                       *
* It uses three integers parameters and display their sum.  *
*************************************************************
*/

void showSum(int num1, int num2, int num3)
{
    int total;
    total = num1 + num2+ num3;
    cout << "The total sum of " << num1 << ", " << num2 << ", and " << num3 << " is: " << total << "!\n";
    cout << "And thats it.";

    // The original example only had for demonstration puerposes, only this: cout << (num1 + num2 + num3) << endl;
    // I want it to add it more flare. The variables value1, 2 and 3 in main are passed by value not by reference. 
    // More on reference latter. 
}