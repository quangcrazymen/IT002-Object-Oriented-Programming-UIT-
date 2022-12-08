#include "CanBoHopDong.h"
using namespace std;

// Nhập, xuất
void CanBoHopDong::nhap(istream &is){
    CanBo::nhap(is);
    cout<<"Nhập vào tien cong: ";
    is>>this->tienCong;
    cout<<"Nhập vào số ngày công: ";
    is>>this->soNgayCong;
    cout<<"Nhập vào hệ số vượt giờ: ";
    is>>this->heSoVuotGio;
}

void CanBoHopDong::xuat(ostream &os){
    CanBo::xuat(os);
    cout<<"Số tien cong: "<<this->tienCong<<'\n';
    cout<<"Hệ số phụ cấp: "<<this->soNgayCong<<'\n';
    cout<<"Nhập vào hệ số lương: "<<this->heSoVuotGio<<'\n';

}

int CanBoHopDong::tinhLuong(){
    return this->tienCong*this->soNgayCong*this->heSoVuotGio;
}

