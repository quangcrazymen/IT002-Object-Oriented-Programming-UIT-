using namespace std;

class CanBoHopDong:public CanBo
{
private:
    int tienCong;
    int soNgayCong;
    int heSoVuotGio;

public:
    void nhap(istream &is);
    void xuat(ostream &os);
    int tinhLuong();
};


