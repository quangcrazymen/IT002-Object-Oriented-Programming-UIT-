#include <iostream>
#include<string>
class Point
{
private:
    float x;
    float y;

public:
    // Constructor
    Point(float x=0 , float y=0);
    ~Point();

    //Hàm get set tọa 
    float getX();
    float getY();

    //Hàm tịnh tiến

    // Nhap
    void Nhap();
    void Xuat();
    float KhoangCach2Diem(Point &other);
};
