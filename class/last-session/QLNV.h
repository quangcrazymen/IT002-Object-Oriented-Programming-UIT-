#include<iostream>
#include<vector>
class QLNV:public NhanVien
{
private:
    vector<NhanVien> dsNhanVien;
public:
    void nhap();
    void xuat();

    // 5 Tìm kiếm nhân viên
    NhanVien searchForEmployer(string name);
    
    // 4. Tính tổng lương của nhân viên
    long tinhLuong();


};

