#include <string>
#include <iostream>
class SinhVien
{
private:
    std::string ma;
    std::string ten;
    float diemToan;
    float diemVan;
    float diemAnh;

public:
    // Constructor
    SinhVien(std::string ten,std::string ma,float diemToan = 0,float diemVan =0,float diemAnh = 0);
    // getter và setter
    void setThongTinSV(std::string ma, std::string ten,int diemToan, int diemVan, int diemAnh);
    void getThongTinSV();
    // Nhập xuất sinh viên
    void Nhap();
    void Xuat();
    //Tính điểm trung bình
    void XuatDTB();
    //Cập nhật điểm của sinh viên
    void UpdateDiem();
};