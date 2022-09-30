# pragma once
#include "Point.h"
using namespace std;
Point::Point(float x, float y)
{
    x = x;
    y = y;
}

Point::~Point()
{
    cout << "Point terminated!"<<endl;
}

void Point::Display()
{
    cout<<"tọa độ là: ("<<x<<", "<<y<<")"<<endl;
}
