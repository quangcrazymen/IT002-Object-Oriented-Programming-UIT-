#include "NhanVienVanPhong.h"
using namespace std;
// Nhập, xuất
void NhanVienVanPhong::nhap(istream &is){
    NhanVien::nhap(is);
    cout<<"Nhập vào số lớp bồi dưỡng chuuyên môn: ";
    cin>>this->soLuongLop;
    cout<<"Nhập vào số giờ lao động công ích: ";
    cin>>this->soGioLaoDong;
}

void NhanVienVanPhong::xuat(ostream &os){
    NhanVien::xuat(os);
    cout<<"Số tiết giảng dạy: "<<this->soLuongLop<<'\n';
    cout<<"Số đề tài: "<<this->soGioLaoDong<<'\n';
}

bool NhanVienVanPhong::laoDongTienTien(){
    if(this->soLuongLop>=1&this->soGioLaoDong>=20){
        return true;
    }
    return false;
}
