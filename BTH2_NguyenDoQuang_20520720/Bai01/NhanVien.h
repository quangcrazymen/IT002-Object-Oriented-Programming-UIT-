#include <string>
#include <iostream>
class NhanVien
{
private:
    std::string hoVaTen;
    int ngayLamViec;
    std::string maNhanVien=std::to_string(ngayLamViec)+hoVaTen;
    std::string chucDanh;
    float heSoLuong;
public:
    //Constructor with 5 variables
    NhanVien(std::string hoVaTen,int,std::string,std::string chucDanh,float heSoLuong);
    //Constructor with 2 varibles
    NhanVien(std::string hoVaTen,int);
    // getter and setter
    std::string getHoTen();
    // Copy constructor
    
    int getNgay();
    // Input and output
    void Nhap();
    void Xuat();
    ~NhanVien();
};


