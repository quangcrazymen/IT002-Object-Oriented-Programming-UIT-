class PhanSo
{
private:
    int tuSo;
    int mauSo;

public:
    // Hàm khỏi tạo(Constructor)
    PhanSo();
    PhanSo(int n);
    PhanSo(int tu, int mau);
    //Copy constructor
    PhanSo(const PhanSo &other);

    // Hàm nhập xuất
    void Nhap();
    void Xuat();
    void XuatKetQuaThuc();
    PhanSo Cong(PhanSo &b);
    PhanSo Tru(PhanSo &b);
    PhanSo Nhan(PhanSo &b);
    PhanSo Chia(PhanSo &b);
    // Destructor
    ~PhanSo();

};