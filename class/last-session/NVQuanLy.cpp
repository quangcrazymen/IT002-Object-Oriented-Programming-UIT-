#include "NVQuanLy.h"
using namespace std;
void NVQuanly::nhap(){
    NhanVien::nhap();
    cout<<"Nhập vào lương cơ bản: ";
    cin>>this->luongCoban;
    cout<<"Nhập vào số ngày làm việc: ";
    cin>>soNgayLamViec;
    cout<<"Nhập vào trợ cấp: ";
    cin>>TroCap;
}

void NVQuanly::xuat(){
    NhanVien::xuat();
    cout<<"Lương cơ bản: "<<this->luongCoban;
    cout<<"Số ngày làm việc: "<<this->luongCoban;
    cout<<"Trợ cấp: "<<this->luongCoban;
}

long NVQuanly::tinhLuong()
{
    return this->luongCoban + this->soNgayLamViec*200000+TroCap; 
}