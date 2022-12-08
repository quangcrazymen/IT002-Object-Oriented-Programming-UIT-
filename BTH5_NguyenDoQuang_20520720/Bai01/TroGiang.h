using namespace std;
class TroGiang:public NhanSu
{
private:
    int soMonTroGiang;
public:
    void nhap();
    void xuat();
    float tinhLuong(){
        return (soMonTroGiang*0.3)*18000;
    }
};

