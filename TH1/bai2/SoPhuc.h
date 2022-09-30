class SoPhuc
{
private:
    int thuc;
    int ao;

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
    SoPhuc Cong(SoPhuc &b);
    SoPhuc Tru(SoPhuc &b);
    SoPhuc Nhan(SoPhuc &b);
    SoPhuc Chia(SoPhuc &b);

};