class NghienCuuVien:public NhanVien
{
private:
    int soDeTaiNghienCuu;
    int soBaiBao;
public:
    void nhap(istream &is);
    void xuat(ostream &os);
    bool laoDongTienTien();

};
