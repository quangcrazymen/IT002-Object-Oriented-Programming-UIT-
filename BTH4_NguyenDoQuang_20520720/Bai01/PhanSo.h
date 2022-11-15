#include<numeric>
#include<iostream>
#include<ostream>
#include<istream>
using namespace std;
class PhanSo
{
private:
    int *tuSo;
    int *mauSo;

public:
    PhanSo(int tu,int mau);
    // Input and Output
    friend istream& operator>> (istream &is,PhanSo &ps);
    friend ostream& operator<< (ostream &os,PhanSo &ps);
    // Basic operations
    PhanSo& operator=(const PhanSo&other);
    PhanSo operator+(const PhanSo&other);
    PhanSo operator-(const PhanSo&other);
    PhanSo operator*(const PhanSo&other);
    PhanSo operator/(const PhanSo&other);

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
    // Display
    void display();
    ~PhanSo();
};



PhanSo::~PhanSo()
{
    delete tuSo,mauSo;
}
