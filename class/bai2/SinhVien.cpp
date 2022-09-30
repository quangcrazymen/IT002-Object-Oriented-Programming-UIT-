#include "SinhVien.h"

using namespace std;

SinhVien::SinhVien(std::string ten,std::string ma,float diemToan,float diemVan,float diemAnh){
    this->ten = ten;
    this->ma = ma;
    this->diemToan = diemToan;
    this->diemVan = diemVan;
    this->diemAnh = diemAnh;
}


void SinhVien::Nhap()
{
    // Nhập mã, tên SV
    cout << "Hãy nhập vào mã SV:" << endl;
    getline(std::cin, this->ma);
    cout << "Hãy nhập vào tên SV:" << endl;
    getline(std::cin, this->ten);
    // Nhập điểm và validate
    cout<< "Lần lượt nhập vào điểm Toán của SV: "<<endl;
    cin>>this->diemToan;
    while(this->diemToan<0 || this->diemToan>10){
        cout<< "Xin nhập lại điểm Toán của SV: "<<endl;
        cin>>this->diemToan;
    }
    cout<< "Lần lượt nhập vào điểm Văn của SV: "<<endl;
    cin>>this->diemVan;
    while(this->diemVan<0 || this->diemVan>10){
        cout<< "Xin nhập lại điểm Văn của SV: "<<endl;
        cin>>this->diemVan;
    }
    cout<< "Lần lượt nhập vào điểm Anh của SV: "<<endl;
    cin>>this->diemAnh;
    while(this->diemAnh<0 || this->diemAnh>10){
        cout<< "Xin nhập lại điểm Anh của SV: "<<endl;
        cin>>this->diemAnh;
    }
}

void SinhVien::Xuat(){
    cout << "mã SV là: " <<this->ma<< endl;
    cout << "tên SV là: " <<this->ten<<endl;
    cout<< "Điểm toán: "<<this->diemToan<<endl;
    cout<< "Điểm văn: "<<this->diemVan<<endl;
    cout<< "Điểm anh: "<<this->diemAnh<<endl;
}

void SinhVien::XuatDTB(){
    cout<<"Điểm trung bình của "<<this->ten<<" là: "<<(1.0)*(diemToan+diemAnh+diemVan)/3<<endl;
}

void SinhVien::UpdateDiem(){
    cout<< "Cập nhật cho SV: "<<this->ten<<endl;
    cout<< "Lần lượt nhập vào điểm Toán của SV: "<<endl;
    cin>>this->diemToan;
    while(this->diemToan<0 || this->diemToan>10){
        cout<< "Xin nhập lại điểm Toán của SV: "<<endl;
        cin>>this->diemToan;
    }
    cout<< "Lần lượt nhập vào điểm Văn của SV: "<<endl;
    cin>>this->diemVan;
    while(this->diemVan<0 || this->diemVan>10){
        cout<< "Xin nhập lại điểm Văn của SV: "<<endl;
        cin>>this->diemVan;
    }
    cout<< "Lần lượt nhập vào điểm Anh của SV: "<<endl;
    cin>>this->diemAnh;
    while(this->diemAnh<0 || this->diemAnh>10){
        cout<< "Xin nhập lại điểm Anh của SV: "<<endl;
        cin>>this->diemAnh;
    }
}