#include "CanBoNhaNuoc.h"
using namespace std;

// Nhập, xuất
void CanBoNhaNuoc::nhap(istream &is){
    CanBo::nhap(is);
    cout<<"Nhập vào lương cơ bản: ";
    is>>this->luongCoBan;
    cout<<"Nhập vào hệ số phụ cấp: ";
    is>>this->heSoPhuCap;
    cout<<"Nhập vào hệ số lương: ";
    is>>this->heSoLuong;
}

void CanBoNhaNuoc::xuat(ostream &os){
    CanBo::xuat(os);
    cout<<"Số lương cơ bản:: "<<this->luongCoBan<<'\n';
    cout<<"Hệ số phụ cấp: "<<this->heSoPhuCap<<'\n';
    cout<<"Nhập vào hệ số lương: "<<this->heSoLuong;

}

int CanBoNhaNuoc::tinhLuong(){
    return this->luongCoBan*this->heSoLuong*this->heSoPhuCap;
}

