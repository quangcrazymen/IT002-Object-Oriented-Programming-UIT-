#include <string>

class Candidate
{
private:
    std::string ma;
    std::string ten;
    std::string date;
    float diemToan;
    float diemVan;
    float diemAnh;

public:
    void setThongTinSV(std::string ma, std::string ten, std::string date,
                       int diemToan, int diemVan, int diemAnh);
    void getThongTinSV();
    void Nhap();
    void Xuat();
};