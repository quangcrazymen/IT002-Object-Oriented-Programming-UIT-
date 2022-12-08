using namespace std;

class GiangVien:public NhanSu
{
private:
    string hocHam;
    string hocVi;
    int namGiangDay;
    vector<string> danhSachMonHoc;

public:
    void nhap();
    void xuat();
    float tinhLuong(){
        return (danhSachMonHoc.size()*this->namGiangDay*0.12)*20000;
    }
};


