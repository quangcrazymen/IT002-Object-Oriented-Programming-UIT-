#include "NhanVien.h"
using namespace std;

string NhanVien::getName(){
    return this->name;
}

void NhanVien::nhap(istream &is) {
    cout<<"Nhập tên: ";
    getline(cin,this->name);
    cout<<"Nhập ngày sinh: ";
    cin>>this->date;
    cout<<"Nhập mã: ";
    cin>>this->maNhanVien;
}

void NhanVien::xuat(ostream &os){
    cout<<"Tên: "<<this->name<<'\n';
    cout<<"Ngày sinh: "<<this->date<<'\n';
    cout<<"Mã nhân sự: "<<this->maNhanVien<<'\n';
}

bool NhanVien::laoDongTienTien(){
    return 0;
}