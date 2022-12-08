using namespace std;

class ChuyenVien: public NhanSu
{
private:
    vector<string> duAnGiaoDuc;
    int knLamViec;
public:
    void nhap();
    void xuat();
    int numberOfTProject(){
        int count=0;
        for(auto &i:duAnGiaoDuc){
            if(i[0]=='T'){
                count+=1;
            }
        }
        return count;
    }
    float tinhLuong(){
        return (knLamViec*4+numberOfXProject('T',this->duAnGiaoDuc))*18000;
    }
};


