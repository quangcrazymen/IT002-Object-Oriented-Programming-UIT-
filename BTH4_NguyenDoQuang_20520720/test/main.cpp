#include <iostream>
#include <ostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class PhanSo
{
    long tuSo, mauSo;

public:
    PhanSo(long t, long m)
    {
        tuSo = t;
        mauSo = m;
    }
    // Constuctor type Conversion
    PhanSo(long x) { set(x, 1) }
    void set(long t, long m)
    {
        this->tuSo = t;
        this->mauSo = m;
    }
    // PhanSo operator+(PhanSo &b) const;
    friend PhanSo operator+(long &a, PhanSo &b);
    void Xuat();
    long getTu() { return tuSo; }
    long getMau() { return mauSo; }
};

void PhanSo::Xuat()
{
    std::cout << "Phân số là: ";
    (this->mauSo == 1) ? std::cout << this->tuSo << std::endl : std::cout << this->tuSo << "/" << this->mauSo << std::endl;
}

// PhanSo PhanSo::operator+(PhanSo &b) const{
//     return PhanSo(this->tuSo*b.mauSo+b.tuSo*this->mauSo,this->mauSo*b.mauSo);
// }

PhanSo operator+(long &a, PhanSo &b)
{
    // return PhanSo(a*b.tuSo,b.mauSo);
    return PhanSo(a.tuSo * b.mauSo + b.tuSo * a.mauSo, a.mauSo * b.mauSo);
}


class NumStr
{
    const char *s;

public:
    NumStr(const char *p) { s = strdup(p); }
    operator double() { return atof(s); }
    friend ostream & operator << (ostream &o, NumStr &ns);

};
ostream & operator << (ostream &o, NumStr &ns){
	return o << ns.s;
};

int main()
{
    // cout << "hello" << endl;
    // PhanSo a(1, 2);
    // PhanSo b(1, 2);
    (a + b).Xuat();
    (5+a).Xuat();
    // cout<<12=>>1;
    NumStr x="52";
    NumStr y="46";
    cout<<x;
    cout<<x+y;
}