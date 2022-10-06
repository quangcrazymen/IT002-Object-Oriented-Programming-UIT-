class SoPhuc
{
private:
    float thuc;
    float ao;

public:
    // Hàm khỏi tạo
    SoPhuc();
    SoPhuc(float tu, float mau);

    // Hàm nhập xuất
    void Nhap();
    void Xuat();
    SoPhuc Cong(SoPhuc &b);
    SoPhuc Tru(SoPhuc &b);
    SoPhuc Nhan(SoPhuc &b);
    SoPhuc Chia(SoPhuc &b);

};