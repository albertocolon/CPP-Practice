#include "RectangleA.h"
#include <iostream>
#include <cstdlib>      // Needed for the exit function
using namespace std;


// The constructor accepts arguments for the width and length.

Rectangle::Rectangle(double w, double l)
{
    width = w;
    length = l;

}

// setWidth set the value of the member variable width. 

void Rectangle::setWidth(double w)
{
    if (w >= 0)
        width = w;
    else
    {
        cout << "invalid width\n";
        exit(EXIT_FAILURE);
    }
}

// setLength sets the value of the member variable length.

void Rectangle::setLength(double l)
{
    if (l >= 0)
        length = l;
    else
    {
        cout << "invalid width\n";
        exit(EXIT_FAILURE);
    }
}
// I dont understan this fucking error here _   
double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getlength() const
{
    return length;
}

double Rectangle::getArea() const
{
    return width * length;
}


