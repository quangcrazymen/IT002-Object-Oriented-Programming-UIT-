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
    // getter and setter
    string getName();
    // input and output
    virtual void nhap();
    virtual void xuat();
    virtual float tinhLuong()=0;
};


