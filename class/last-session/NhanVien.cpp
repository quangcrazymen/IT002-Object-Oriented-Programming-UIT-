#include "NhanVien.h"
using namespace std;

NhanVien::NhanVien(string ten="",string date="")
{
    this->name = ten;
    this->date = date;
}

string NhanVien::getName(){
    return this->name;
}

void NhanVien::nhap(){
    cin.ignore();
    cout<<"Nhập tên: ";
    getline(cin,this->name);
    cout<<"Nhập ngày sinh: ";
    getline(cin,this->date);
}

void NhanVien::xuat(){
    cout<<"Tên: "<<this->name<<'\n';
    cout<<"Ngày sinh: "<<this->date<<'\n';
}

NhanVien::~NhanVien()
{
}