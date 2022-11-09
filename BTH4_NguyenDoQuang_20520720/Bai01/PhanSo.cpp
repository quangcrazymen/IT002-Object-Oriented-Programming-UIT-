#include "PhanSo.h"
using namespace std;
PhanSo::PhanSo(int tu,int mau){
    tuSo=new int(tu);
    mauSo=new int(mau);
}

PhanSo::PhanSo(const PhanSo& other){
    tuSo = new int(*other.tuSo);
    mauSo = new int(*other.mauSo);
}
// PhanSo::PhanSo(int *tu,int *mau){
//     this->tuSo=tu;
//     this->mauSo=mau;
// }

PhanSo PhanSo::operator=(const PhanSo&other){
    *this->tuSo = *other.tuSo;
    *this->mauSo = *other.mauSo;
    
}
PhanSo operator+(const PhanSo&other){

}
PhanSo PhanSo::operator-(const PhanSo&other);
PhanSo PhanSo::operator*(const PhanSo&other);
PhanSo& PhanSo::operator+=(const PhanSo&other);
PhanSo& PhanSo::operator-=(const PhanSo&other);
PhanSo& PhanSo::operator*=(const PhanSo&other);
PhanSo& PhanSo::operator/=(const PhanSo&other);
bool PhanSo::operator==(const PhanSo&other);
bool PhanSo::operator>(const PhanSo&other);
bool PhanSo::operator<(const PhanSo&other);
bool PhanSo::operator<=(const PhanSo&other);
bool PhanSo::operator>=(const PhanSo&other);
bool PhanSo::operator!=(const PhanSo&other);
void PhanSo::display(){
    cout<<*this->tuSo<<"/"<<*this->mauSo;
}

