using namespace std;

class CanBoNhaNuoc:public CanBo
{
private:
    int luongCoBan;
    int heSoLuong;
    int heSoPhuCap;

public:
    void nhap(istream &is);
    void xuat(ostream &os);
    int tinhLuong();
};


