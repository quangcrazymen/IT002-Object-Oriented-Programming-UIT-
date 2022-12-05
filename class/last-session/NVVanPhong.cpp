#include "NVVanPhong.h"
using namespace std;
void NVVanPhong::nhap(){
    NhanVien::nhap();
    cout<<"Nhập vào lương cơ bản: ";
    cin>>this->luongCoban;
    cout<<"Nhập vào hệ số chức vụ: ";
    cin>>this->heSo;
    cout<<"Nhập vào thưởng: ";
    cin>>this->thuong;
}

void NVVanPhong::xuat(){
    NhanVien::xuat();
    cout<<"Lương cơ bản: "<<this->luongCoban;
    cout<<"Số ngày làm việc: "<<this->luongCoban;
    cout<<"Trợ cấp: "<<this->luongCoban;
}

long NVVanPhong::tinhLuong()
{
    return this->luongCoban + this->heSo+thuong; 
}