#include<numeric>
#include<iostream>
class PhanSo
{
private:
    int *tuSo;
    int *mauSo;

public:
    PhanSo(int tu,int mau);
    // ~PhanSo();
    PhanSo operator=(const PhanSo&other);
    PhanSo operator+(const PhanSo&other);
    PhanSo operator-(const PhanSo&other);
    PhanSo operator*(const PhanSo&other);
    PhanSo& operator+=(const PhanSo&other);
    PhanSo& operator-=(const PhanSo&other);
    PhanSo& operator*=(const PhanSo&other);
    PhanSo& operator/=(const PhanSo&other);
    bool operator==(const PhanSo&other);
    bool operator>(const PhanSo&other);
    bool operator<(const PhanSo&other);
    bool operator<=(const PhanSo&other);
    bool operator>=(const PhanSo&other);
    bool operator!=(const PhanSo&other);
    // Pha
    void display();
    ~PhanSo();
};



PhanSo::~PhanSo()
{
    delete tuSo,mauSo;
}
