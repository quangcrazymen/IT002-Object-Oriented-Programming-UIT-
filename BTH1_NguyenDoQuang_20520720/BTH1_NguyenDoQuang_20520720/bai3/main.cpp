#include "Point.cpp" 
#include<iostream>
using namespace std;

int main(){
    Point a(1,3);
    Point b;
    cout<<"Hãy nhập vào tọa độ của điểm B: "<<endl;
    b.Nhap();
    cout<<"Khoảng cách giữa 2 điểm là: "<<a.KhoangCach2Diem(b)<<endl;
    return 0;
}