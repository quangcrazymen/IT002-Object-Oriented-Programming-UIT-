#include "NVSanXuat.h"
using namespace std;

void NVSanXuat::nhap(){
    NhanVien::nhap();
    cout<<"Nhập vào lương cơ bản: ";
    cin>>this->luongCoban;
    cout<<"Nhập vào số sản phẩm: ";
    cin>>this->soSanPham;
}

void NVSanXuat::xuat(){
    NhanVien::xuat();
    cout<<"Lương cơ bản: "<<this->luongCoban;
    cout<<"Số ngày làm việc: "<<this->soSanPham;
}

long NVSanXuat::tinhLuong()
{
    return this->luongCoban + this->soSanPham*2000; 
}