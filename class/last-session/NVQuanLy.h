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
    NVQuanly(string name,string date,string ma,string hocHam,string hocVi,int nam, vector<string>list);
    void nhap();
    void xuat();
    long tinhLuong();
    ~GiangVien();
};
