#include "CanBo.h"
using namespace std;

string CanBo::getName(){
    return this->name;
}

void CanBo::nhap(istream &is) {
    cout<<"Nhập tên: ";
    getline(cin,this->name);
    cout<<"Nhập ngày sinh: ";
    cin>>this->date;
    cout<<"Nhập mã: ";
    cin>>this->maCanBo;
}

void CanBo::xuat(ostream &os){
    cout<<"Tên: "<<this->name<<'\n';
    cout<<"Ngày sinh: "<<this->date<<'\n';
    cout<<"Mã nhân sự: "<<this->maCanBo<<'\n';
}

