#include <iostream>
class Point
{
private:
    float x;
    float y;
    //Name of a point
    char name;
public:
    // Constructor
    Point(float x=0 , float y=0,char=NULL );
    ~Point();

    //Hàm get set tọa độ

    //Hàm tịnh tiến

    // Nhap
    void Nhap();
    void Xuat();
    float KhoangCach2Diem(Point &other);
};
