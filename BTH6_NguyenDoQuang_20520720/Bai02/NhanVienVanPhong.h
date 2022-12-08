using namespace std;
class NhanVienVanPhong: public NhanVien
{
private:
    int soLuongLop;
    int soGioLaoDong;
public:
    void nhap(istream &is);
    void xuat(ostream &os);
    bool laoDongTienTien();
};
