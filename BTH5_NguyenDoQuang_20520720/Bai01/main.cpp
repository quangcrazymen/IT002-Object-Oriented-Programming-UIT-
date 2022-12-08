#include <iostream>
#include <vector>
#include "NhanSu.cpp"
#include "GiangVien.cpp"
#include "TroGiang.cpp"
#include "NghienCuuVien.cpp"
#include "ChuyenVien.cpp"
#include "QLNS.cpp"

using namespace std;

int main(){
    QLNS management;
    management.nhap();
    management.xuat();
    cout<<"Tổng lương của nhân sự là: "<<management.tinhLuong()<<'\n';
}
