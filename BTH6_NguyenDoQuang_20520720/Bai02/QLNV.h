using namespace std;
class QLNV: public NhanVien
{
private:
    vector<NhanVien*> dsNhanVien;
public:
    void nhap(istream &is);
    void xuat(ostream &os);
    
};
