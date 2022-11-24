#include <string>
#include<iostream>

using namespace std;
class NhanSu
{
protected:
    std::string name;
    std::string date;
    std::string maNhanSu;
public:
    NhanSu(string ten,string date,string ma);
    // getter and setter
    string getName();
    // input and output
    void nhap();
    void xuat();
    virtual float tinhLuong()=0;
    ~NhanSu();
};


