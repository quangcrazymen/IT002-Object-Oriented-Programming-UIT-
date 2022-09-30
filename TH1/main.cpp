#include "PhanSo.cpp"

int main(){
    // Bài 1:
    PhanSo a;
    a.Nhap();
    a.Xuat();
    a.XuatKetQua();
    PhanSo b;
    b.Nhap();
    a.Cong(b).Xuat();
    a.Tru(b).Xuat();
    a.Nhan(b).Xuat();
    return 0;
}