using namespace std;
class TroGiang:public NhanSu
{
private:
    int soMonTroGiang;
public:
    TroGiang(/* args */);
    ~TroGiang();
    void nhap();
    void xuat();
    float tinhLuong(){
        return (soMonTroGiang*0.3)*18000;
    }
};

TroGiang::TroGiang(/* args */)
{
}

TroGiang::~TroGiang()
{
}
