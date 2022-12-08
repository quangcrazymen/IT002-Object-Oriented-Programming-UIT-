using namespace std;

class GiangVien:public NhanVien
{
private:
    int soTiet;
    int soDeTai;

public:
    void nhap(istream &is);
    void xuat(ostream &os);
    bool laoDongTienTien();
};


