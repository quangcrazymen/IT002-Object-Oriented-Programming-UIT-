#include "CanBoGiangVien.h"
using namespace std;

CanBoGiangVien::CanBoGiangVien(){
    this->luongCoBan=1490000;
    this->heSoLuong=1;
    this->soTiet=0;
    this->trinhDo="";
    this->khoa="";
}
CanBoGiangVien::CanBoGiangVien(int heSo,int soTiet,string trinhDo,string khoa){
    this->luongCoBan=1490000;
    this->heSoLuong=heSo;
    this->soTiet=soTiet;
    this->trinhDo=trinhDo;
    this->khoa=khoa;
}


// Nhập, xuất
void CanBoGiangVien::nhap(istream &is){
    CanBo::nhap(is);
    cout<<"Nhập vào hệ số tiet day: ";
    is>>this->soTiet;
    cout<<"Nhập vào hệ số lương: ";
    is>>this->heSoLuong;
    cout<<"Nhap vao trinh do: ";
    is>>this->trinhDo;
    cout<<"Nhap vao ten khoa: ";
    is>>this->khoa;
}

void CanBoGiangVien::xuat(ostream &os){
    CanBo::xuat(os);
    cout<<"Số lương cơ bản:: "<<this->luongCoBan<<'\n';
    cout<<"Nhập vào hệ số lương: "<<this->heSoLuong<<'\n';
    cout<<"Nhập vào hệ số tiet day: "<<this->soTiet<<'\n';
    cout<<"Nhap vao trinh do: "<<this->trinhDo<<'\n';
    cout<<"Nhap vao ten khoa: "<<this->khoa<<'\n';

}

int CanBoGiangVien::tinhLuong(){
    int phuCap=0;
    if(this->trinhDo=="ky su"){
        phuCap = 1200000;
    }
    else if(this->trinhDo=="thac si"){
        phuCap = 2500000;
    }
    else if(this->trinhDo=="tien si"){
        phuCap = 4500000;
    }
    this->luong = this->luongCoBan*this->heSoLuong+this->soTiet*120000+phuCap;
    return this->luongCoBan*this->heSoLuong+this->soTiet*120000+phuCap;
}

int CanBoGiangVien::hoanThanhNhiemVu(){
    if(this->soTiet<30){
        return 0;
    }
    if(this->soTiet>=30 & this->soTiet<=100){
        return 1;
    }
    if(this->soTiet>100){
        return 2;
    }
    return -1;
}
