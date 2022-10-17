#include "NhanVien.cpp"
#include<iostream>
#include<string>

using namespace std;
int main(){
    NhanVien a("NguyenQuang",1234);
    a.xuat();
    NhanVien b("ThanhCk",600,"600ThanhCk","Quan ly",1.5);
    b.xuat();
    NhanVien c;
    c.nhap();
    c.xuat();
    return 0;
}
