// Slide 43 Tinh tien luong
#include <iostream>
#include "NhanVien.cpp"
#include "NVQuanLy.cpp"
#include "NVVanPhong.cpp"
#include "NVSanXuat.cpp"
#include "QLNV.cpp"
using namespace std;

int main(){
    // Tất cả các yêu cầu đề bài chứa trong class QLNV (Quản lý nhân viên)
    QLNV management;
    management.nhap();
    management.xuat();
    management.tinhLuong();
    management.searchForEmployer("Nguyen Van A");
    return 0;
}