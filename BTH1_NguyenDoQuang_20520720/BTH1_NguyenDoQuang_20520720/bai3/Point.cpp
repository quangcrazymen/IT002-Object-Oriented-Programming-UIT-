#include "Point.h"
#include <math.h> 
using namespace std;

Point::Point(float x, float y)
{
    this->x = x;
    this->y = y;
}

Point::~Point()
{
    cout << "Program exited!";
}

void Point::Nhap()
{
    cout<<"Hãy nhập vào x"<<endl;
    cin>>x;
    cout<<"Hãy nhập vào y"<<endl;
    cin>>y;
}
void Point::Xuat()
{
    cout<<"tọa độ là: ("<<x<<", "<<y<<")"<<endl;
}
float Point::KhoangCach2Diem(Point &other)
{
    return sqrt(pow(this->x-other.x,2)+pow(this->y-other.y,2));
}