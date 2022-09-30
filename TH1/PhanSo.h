class PhanSo
{
private:
    int tuSo;
    int mauSo;

public:
    // Hàm khỏi tạo
    // PhanSo();
    // PhanSo(int n);
    // PhanSo(int tu, int mau);
    // PhanSo(const PhanSo &other);

    // Hàm nhập xuất
    void Nhap();
    void Xuat();
    void XuatKetQua();
    PhanSo Cong(PhanSo &b);
    PhanSo Tru(PhanSo &b);
    PhanSo Nhan(PhanSo &b);
    PhanSo Chia(PhanSo &b);

};