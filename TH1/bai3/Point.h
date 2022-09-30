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

    // Nhap
    void Nhap();
    void Xuat();
    // float KhoangCach2Diem(Point &other);
};
