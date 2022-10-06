#include "SoPhuc.cpp" 
using namespace std;
int main(){
    SoPhuc a;
    a.Nhap();
    a.Xuat();
    SoPhuc b(2,4);
    b.Xuat();
    cout<<"Tổng của 2 số phức là: ";
    a.Cong(b).Xuat();
    cout<<"Hiệu của 2 số phức là: ";
    a.Tru(b).Xuat();
    cout<<"Tích của 2 số phức là: ";
    a.Nhan(b).Xuat();
    cout<<"Thương của 2 số phức là: ";
    a.Chia(b).Xuat();
    return 0;
}