#ifndef RECTANGLEA_H
#define RECTANGLEA_H
#include <iostream>
using namespace std;

class Rectangle
{
    private:
        double width;
        double length;

    public:
        Rectangle(double, double);
        void setWidth(double);
        void setLength(double);

        double getWidth() const;
        double getlength() const;
        double getArea() const;

};
#endif