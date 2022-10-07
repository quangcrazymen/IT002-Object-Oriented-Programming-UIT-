#include "NhanVien.h"
using namespace std;
NhanVien::NhanVien(std::string hoVaTen,int ngay)
{
    this->hoVaTen = hoVaTen;
    this->ngayLamViec = ngay;
    this->maNhanVien = to_string(ngay)+hoVaTen;
    if(this->ngayLamViec>0 && this->ngayLamViec<=365){
        this->chucDanh="Nhan vien";
    }
    else if(this->ngayLamViec>365 && this->ngayLamViec<=730){
        this->chucDanh="Quan ly";
    }
    else if(this->ngayLamViec>730 && this->ngayLamViec<=1460){
        this->chucDanh="Truong phong";
    }
    else if(this->ngayLamViec>1460){
        this->chucDanh="Truong ban quan ly";
    }
    if(this->chucDanh=="Nhan vien"){
        this->heSoLuong=1.0;
    }
    if(this->chucDanh=="Quan ly"){
        this->heSoLuong=1.5;
    }
    if(this->chucDanh=="Truong phong"){
        this->heSoLuong=2.25;
    }
    if(this->chucDanh=="Truong ban quan ly"){
        this->heSoLuong=4.0;
    }
}

void NhanVien::Xuat(){
    cout<<"Họ và tên nhân viên: "<<this->hoVaTen<<endl;
    cout<<"Ngày làm việc nhân viên: "<<this->ngayLamViec<<endl;
    cout<<"Mã số nhân viên: "<<this->maNhanVien<<endl;
    cout<<"Chức danh nhân viên: "<<this->chucDanh<<endl;
    cout<<"Hệ số lương nhân viên: "<<this->heSoLuong<<endl;
}

NhanVien::~NhanVien()
{
    cout<<"Nhan Vien terminated!"<<endl;
}