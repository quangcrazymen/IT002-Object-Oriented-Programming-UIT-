#include "Point.h"
using namespace std;
// Point::Point(){
//     x =0;
//     y=0;
// }

Point::Point(float x, float y)
{
    x = x;
    y = y;
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
// float Point::KhoangCach2Diem(Point &other)
// {
//     return other;
// }