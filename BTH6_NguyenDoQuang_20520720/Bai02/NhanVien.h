#include <string>
#include<iostream>

using namespace std;
class NhanVien
{
protected:
    std::string name;
    std::string date;
    std::string maNhanVien;
public:
    // getter and setter
    string getName();
    // input and output
    virtual void nhap(istream &is);
    virtual void xuat(ostream &os);
    virtual bool laoDongTienTien();
    friend istream& operator>> (istream& is, NhanVien &nv) {
        nv.nhap(is);
        return is;
    }
    friend std::ostream& operator<<(std::ostream& os, NhanVien &data)
    {
        data.xuat(os);
        return os;
    }
};


