using namespace std;

class CanBoGiangVien:public CanBo
{
private:
    int luongCoBan;
    int heSoLuong;
    int soTiet;
    string trinhDo;
    string khoa;

public:
    // Constructor
    CanBoGiangVien();
    CanBoGiangVien(int heSo,int soTiet,string trinhDo,string khoa);
    // getter, setter
    int getSoTiet() const{
        return this->soTiet;
    }
    void setSoTiet(int tiet){
        this->soTiet = tiet;
    }

    string getTrinhDo(){
        return this->trinhDo;
    }

    void setTrinhDo(string trinhDo){
        this->trinhDo=trinhDo;
    }

    void setKhoa(string khoa){
        this->khoa=khoa;
    }

    string getKhoa(){
        return this->khoa;
    }

    void nhap(istream &is);
    void xuat(ostream &os);
    int tinhLuong();

    // kiem tra neu hoan thanh nhiem vu
    int hoanThanhNhiemVu();
    
};


