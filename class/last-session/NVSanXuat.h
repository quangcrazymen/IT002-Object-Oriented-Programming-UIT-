#include <vector>
#include <string>
#include <iostream>
using namespace std;

class NVSanXuat:public NhanVien
{
private:
    long luongCoban;
    int soSanPham;

public:
    void nhap();
    void xuat();
    long tinhLuong();
};
