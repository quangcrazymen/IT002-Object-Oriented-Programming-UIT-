#include<time.h>
using namespace std;

// Random function base on time
static int random(int min, int max) {
    static bool first = true;
    if (first) {
        srand(time(NULL));
        first = false;
    }
    return min + rand() % ((max + 1) - min);
}

class DongVat
{
protected:
    int soLuongCon;
    int soLitSua;
public:
    // Input and Output
    virtual void keu(){
        cout<<"Dong vat"<<endl;
    }
    virtual void luongSua(){
        cout<<"Luong suu la: "<<this->soLitSua<<'\n';
    }
    void xuat();
};
