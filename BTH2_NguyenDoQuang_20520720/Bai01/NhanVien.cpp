#include "NhanVien.h"
using namespace std;

// Getter and setter
string NhanVien::getHoTen(){
    return this->hoVaTen;
}
void NhanVien::setHoTen(string ten){
    this->hoVaTen = ten;
}
int NhanVien::getNgay(){
    return this->ngayLamViec;
}
void NhanVien::setNgay(int ngay){
    this->ngayLamViec = ngay;
}
//Default constructor
NhanVien::NhanVien():hoVaTen("Unknown"),ngayLamViec(0){

}

//Phương thức tạo lập với 5 tham số:
NhanVien::NhanVien(std::string hoVaTen,int ngay,std::string ma,std::string chucDanh,float heSoLuong){
    this->hoVaTen = hoVaTen;
    this->ngayLamViec = ngay;
    this->maNhanVien = ma;
    this->chucDanh = chucDanh;
    this->heSoLuong = heSoLuong;
}

//Phương thức tạo lập với 2 tham số:
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

// Hãy viết phương thức để nhập và xuất thông tin lớp Nhân Viên
void NhanVien::nhap(){
    cout<<"Nhập họ và tên nhân viên: ";
    cin.ignore();
    getline(cin,hoVaTen);
    cout<<"Nhập ngày làm việc nhân viên: ";
    cin>>this->ngayLamViec;
    cout<<"Nhập mã số nhân viên: ";
    cin.ignore();
    getline(cin,this->maNhanVien);
    cout<<"Nhập chức danh nhân viên: ";
    cin.ignore();
    getline(cin,this->chucDanh);
    cout<<"Nhập hệ số lương nhân viên: ";
    cin>>heSoLuong;
}

void NhanVien::xuat(){
    cout<<"Họ và tên nhân viên: "<<this->hoVaTen<<endl;
    cout<<"Ngày làm việc nhân viên: "<<this->ngayLamViec<<endl;
    cout<<"Mã số nhân viên: "<<this->maNhanVien<<endl;
    cout<<"Chức danh nhân viên: "<<this->chucDanh<<endl;
    cout<<"Hệ số lương nhân viên: "<<this->heSoLuong<<endl;
}

// Phương thức hủy Nhân Viên
NhanVien::~NhanVien()
{
    cout<<"Nhan Vien terminated!"<<endl;
}