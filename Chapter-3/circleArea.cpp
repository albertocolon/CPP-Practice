// This program calculates the area of a circle using the pw function. 
// This is to practice aritmethic operations. 
// The formula for the area of the curcle is PI times the radius squared. PI is 3.14159

#include <iostream>
#include <cmath>        // Needed librery for the pow function.
using namespace std;

int main()
{
    const double PI = 3.14159;
    double area, radius;

    cout << "This program calculates the area of a circle.\n";
    cout << "What is the area of the circle? ";
    cin >> radius;
    area = PI * pow(radius, 2.0);
    cout << "The area of the circle is " << area << "." << endl;

    return 0;

}