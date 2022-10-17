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
    // Default constructor
    NhanVien();
    //Constructor with 5 variables
    NhanVien(std::string hoVaTen,int,std::string,std::string chucDanh,float heSoLuong);
    //Constructor with 2 varibles
    NhanVien(std::string hoVaTen,int);
    // getter and setter
    std::string getHoTen();
    void setHoTen(std::string);
    int getNgay();
    void setNgay(int);
    // Copy constructor
    
    // Input and output
    void nhap();
    void xuat();
    ~NhanVien();
};


