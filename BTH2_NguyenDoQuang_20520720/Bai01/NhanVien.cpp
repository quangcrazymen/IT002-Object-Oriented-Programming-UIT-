#include "NhanVien.h"
using namespace std;
NhanVien::NhanVien(std::string hoVaTen,int ngay)
{
    this->hoVaTen = hoVaTen;
    this->heSoLuong = ngay;
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
}