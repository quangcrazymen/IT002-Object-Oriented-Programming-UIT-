#include "GiangVien.h"
using namespace std;

// Nhập, xuất
void GiangVien::nhap(istream &is){
    NhanVien::nhap(is);
    cout<<"Nhập vào số tiết giảng dạy: ";
    cin>>this->soTiet;
    cout<<"Nhập vào số đề tài: ";
    cin>>this->soDeTai;
}

void GiangVien::xuat(ostream &os){
    NhanVien::xuat(os);
    cout<<"Số tiết giảng dạy: "<<this->soTiet<<'\n';
    cout<<"Số đề tài: "<<this->soDeTai<<'\n';
}

bool GiangVien::laoDongTienTien(){
    if(this->soTiet>=300&this->soDeTai>=5){
        return true;
    }
    return false;
}

