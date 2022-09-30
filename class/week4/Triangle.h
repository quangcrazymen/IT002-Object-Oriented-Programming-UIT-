#include <iostream>
// #include "Point.h"
class Triangle
{
private:
    Point a;
    Point b;
    Point c;
public:
    Triangle(Point &a,Point &b, Point &c);
    ~Triangle();
    void display();
};


