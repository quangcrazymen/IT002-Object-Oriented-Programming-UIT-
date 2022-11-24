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
private:
    int soLuongCon;
    int soLitSua;
public:
    DongVat(/* args */);
    // Input and Output
    virtual void keu();
    virtual void luongSua();
    ~DongVat();
};

DongVat::DongVat(/* args */)
{
}

DongVat::~DongVat()
{
}
