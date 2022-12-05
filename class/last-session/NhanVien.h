#include <string>
#include<iostream>

using namespace std;
class NhanVien
{
protected:
    std::string name;
    std::string date;
public:
    NhanVien(string ten,string date);
    // getter and setter
    string getName();
    // input and output
    void nhap();
    void xuat();
    virtual long tinhLuong()=0;
    ~NhanVien();
};


