#include <vector>
#include <string>
#include <iostream>
using namespace std;

class NVQuanly:public NhanVien
{
private:
    long luongCoban;
    int soNgayLamViec;
    long TroCap;

public:
    void nhap();
    void xuat();
    long tinhLuong();
};
