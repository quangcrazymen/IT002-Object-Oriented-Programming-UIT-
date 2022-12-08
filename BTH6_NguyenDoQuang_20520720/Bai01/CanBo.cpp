#include "CanBo.h"
using namespace std;

string CanBo::getName(){
    return this->name;
}

void CanBo::nhap(istream &is) {
    cout<<"Nhập tên: ";
    getline(is,this->name);
    cout<<"Nhập ngày sinh: ";
    is>>this->date;
    cout<<"Nhập mã: ";
    is>>this->maCanBo;
}

void CanBo::xuat(ostream &os){
    os<<"Tên: "<<this->name<<'\n';
    os<<"Ngày sinh: "<<this->date<<'\n';
    os<<"Mã nhân sự: "<<this->maCanBo<<'\n';
}

int CanBo::tinhLuong(){
    return 0;
}