class NghienCuuVien:public NhanSu
{
private:
    vector<string> duAnNghienCuu; 
    int knNghienCuu;   
public:
    NghienCuuVien(int kn,vector<string> duAn);

    void nhap();
    void xuat();
    float tinhLuong(){
        return (knNghienCuu*4+numberOfXProject('D',this->duAnNghienCuu))*20000;
    }
    ~NghienCuuVien();
};



NghienCuuVien::~NghienCuuVien()
{
}
