#include <vector>
#include <string>
#include <iostream>
using namespace std;

class GiangVien:public NhanSu
{
private:
    string hocHam;
    string hocVi;
    int namGiangDay;
    vector<string> danhSachMonHoc;

public:
    GiangVien(string name,string date,string ma,string hocHam,string hocVi,int nam, vector<string>list);
    void nhap();
    void xuat();
    float tinhLuong(){
        return (danhSachMonHoc.size()*this->namGiangDay*0.12)*20000;
    }
    ~GiangVien();
};


