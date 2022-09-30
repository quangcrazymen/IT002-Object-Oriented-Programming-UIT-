class PhanSo
{
private:
    int tuSo;
    int mauSo;

public:
    // Hàm khỏi tạo
    PhanSo();
    PhanSo(int n);
    PhanSo(int tu, int mau);
    PhanSo(const PhanSo &other);

    // Hàm get set
    int getTuSo();
    int getMauSo();

    // Hàm nhập xuất
    void Nhap();
    void Xuat();
    PhanSo Cong(PhanSo elements[2]);
};