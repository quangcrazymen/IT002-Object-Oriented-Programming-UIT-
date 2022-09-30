#include "SinhVien.cpp"

//#include<iostream>
//#include<string>
int main()
{
    SinhVien a("Nguyen Van A","19002000");
    a.Xuat();
    SinhVien b("Nguyen Van B","20002001",8.5,8.0,9);
    b.Xuat();
    b.XuatDTB();
    a.UpdateDiem();
    a.XuatDTB();
    return 0;
}