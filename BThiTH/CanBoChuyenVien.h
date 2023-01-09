#include<string>
using namespace std;

class CanBoChuyenVien:public CanBo
{
private:
    string phongBan;
    string chucVu;
    int soNgayCong;
    int heSoLuong;
    int luongCoBan;

public:
// constructor
    CanBoChuyenVien(){
        this->phongBan="";
        this->chucVu = "";
        this->soNgayCong=0;
        this->heSoLuong = 1;
        luongCoBan = 1490000;
    }
    CanBoChuyenVien(string phongBan,string chucVu,int soNgay,int heSoLuong){
        this->phongBan=phongBan;
        this->chucVu = chucVu;
        this->soNgayCong=soNgay;
        this->heSoLuong = heSoLuong;
        luongCoBan = 1490000;
    }
    // getter, setter
    string getChucVu() const{
        return this->chucVu;
    }
    void setChucVu(string chucVu){
        this->chucVu =chucVu;
    }

    string getPhongBan() const{
        return this->phongBan;
    }
    void setPhongBan(string phongBan){
        this->phongBan=phongBan;
    }
    
    int getSoNgayCong(){
        return this->soNgayCong;
    }

    void setSoNgayCong(int ngayCong){
        this->soNgayCong=ngayCong;
    }

    void nhap(istream &is);
    void xuat(ostream &os);
    int tinhLuong();

    int hoanThanhNhiemVu();

};


