#include <string>
#include<iostream>

using namespace std;
class CanBo
{
protected:
    std::string name;
    std::string date;
    std::string maCanBo;
    int luong;
public:
    // getter and setter
    string getName();
    void setName(string name){
        this->name = name;
    }
    // input and output
    virtual void nhap(istream &is);
    virtual void xuat(ostream &os);

    virtual int hoanThanhNhiemVu(){ return 0;};
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


