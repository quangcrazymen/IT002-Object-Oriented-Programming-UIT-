using namespace std;

class ChuyenVien
{
private:
    vector<string> duAnGiaoDuc;
    int knLamViec;
public:
    ChuyenVien(/* args */);
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
    ~ChuyenVien();
};


