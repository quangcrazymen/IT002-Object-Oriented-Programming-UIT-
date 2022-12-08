#include <string>
#include<iostream>

using namespace std;
class CanBo
{
protected:
    std::string name;
    std::string date;
    std::string maCanBo;
public:
    // getter and setter
    string getName();
    // input and output
    virtual void nhap(istream &is);
    virtual void xuat(ostream &os);
    virtual int tinhLuong();
    friend istream& operator>> (istream& is, CanBo &nv) {
        nv.nhap(is);
        return is;
    }
    friend std::ostream& operator<<(std::ostream& os, CanBo &data)
    {
        data.xuat(os);
        return os;
    }
};


