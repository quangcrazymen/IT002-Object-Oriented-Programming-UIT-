#include "CanBoChuyenVien.h"
using namespace std;

// Nhập, xuất
void CanBoChuyenVien::nhap(istream &is){
    CanBo::nhap(is);
    cout<<"Nhập vào phong ban: ";
    is>>this->phongBan;
    cout<<"Nhập vào số chuc vu: ";
    is>>this->chucVu;
    cout<<"Nhập vào hệ số luong: ";
    is>>this->heSoLuong;
    cout<<"Nhap vao so ngay cong";
    is>>this->soNgayCong;
}

void CanBoChuyenVien::xuat(ostream &os){
    CanBo::xuat(os);
    cout<<"Phong ban: "<<this->phongBan<<'\n';
    cout<<"Chuc vu: "<<this->chucVu<<'\n';
    cout<<"So ngay cong: "<<this->soNgayCong<<'\n';
    cout<<"Nhập vào hệ số lương: "<<this->heSoLuong<<'\n';

}

int CanBoChuyenVien::tinhLuong(){
    int phuCap;
    if(this->chucVu=="chuyen vien"){
        phuCap = 1200000;
    }
    if(this->chucVu=="pho phong"){
        phuCap = 2500000;
    }
    if(this->chucVu=="truong phong"){
        phuCap = 4200000;
    }
    this->luong = this->luongCoBan*this->heSoLuong+this->soNgayCong*110000+phuCap;
    return this->luongCoBan*this->heSoLuong+this->soNgayCong*110000+phuCap;
}

int CanBoChuyenVien::hoanThanhNhiemVu(){
    if(this->soNgayCong<20){
        return 0;
    }
    if(this->soNgayCong>=20 & this->soNgayCong<=25){
        return 1;
    }
    if(this->soNgayCong>25){
        return 2;
    }
    return -1;
}
