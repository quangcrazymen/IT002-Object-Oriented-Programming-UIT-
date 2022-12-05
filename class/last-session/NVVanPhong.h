#include <vector>
#include <string>
#include <iostream>
using namespace std;

class NVVanPhong:public NhanVien
{
private:
    long luongCoban;
    int heSo;
    int thuong;

public:
    void nhap();
    void xuat();
    long tinhLuong();
};
