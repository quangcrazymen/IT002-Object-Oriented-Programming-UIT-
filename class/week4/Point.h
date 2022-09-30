#include <iostream>
class Point
{
private:
    float x;
    float y;

public:
    // Point();
    Point(float x = 0, float y = 0);
    ~Point();

    void Display();
};
