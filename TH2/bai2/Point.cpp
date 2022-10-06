#include "Point.h"
#include <math.h> 
using namespace std;

Point::Point(float x, float y)
{
    this->x = x;
    this->y = y;
    cout<<"Point "<<this->x<<" constructed"<<endl;
}

Point::~Point()
{
    cout << "Point "<<this->x<<" destructed"<<endl;  
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

float Point::getX(){
    return this->x;
}

float Point::getY(){
    return this->y;
}

float Point::KhoangCach2Diem(Point &other)
{
    return sqrt(pow(this->x-other.x,2)+pow(this->y-other.y,2));
}