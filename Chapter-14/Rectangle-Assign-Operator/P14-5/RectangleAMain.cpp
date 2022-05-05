// This program should demonstrate memberise assigment.
#include <iostream>
#include "RectangleA.h"
using namespace std;

int main()
{
    // Defining the twi Rectangle objects.
    Rectangle box1(10.0, 10.0);         // width is 10.0 and length is also 10.0.
    Rectangle box2(20.0, 20.0);         // wisth is 20.0 and length is also 20.0

    // Display each object's width and length.
    cout << "box1's width and length is: " << box1.getWidth() << ", " << box1.getlength() << endl;
    cout << "box2's width and length is: " << box2.getWidth() << ", " << box2.getlength() << endl; 

    // Assinging the members of box 1 to box 2.
    box2 = box1;

    // Displaying each object's width and length again.
    cout << "box1's width and length is: " << box1.getWidth() << ", " << box1.getlength() << endl;
    cout << "box2's width and length is: " << box2.getWidth() << ", " << box2.getlength() << endl;

    return 0;
}