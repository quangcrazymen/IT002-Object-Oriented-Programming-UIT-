#include "PhanSo.h"
using namespace std;
PhanSo::PhanSo(int tu,int mau){
    tuSo=new int(tu);
    mauSo=new int(mau);
}

// PhanSo::PhanSo(const PhanSo& other){
//     tuSo = new int(*other.tuSo);
//     mauSo = new int(*other.mauSo);
// }
// PhanSo::PhanSo(int *tu,int *mau){
//     this->tuSo=tu;
//     this->mauSo=mau;
// }

// PhanSo PhanSo::operator=(const PhanSo&other){
//     *this->tuSo = *other.tuSo;
//     *this->mauSo = *other.mauSo;
    
// }
PhanSo PhanSo::operator+(const PhanSo&b){
    int tu = *this->tuSo * *b.mauSo + *b.tuSo * (*this->mauSo);
    int mau = *this->mauSo * (*b.mauSo);
    // Hàm gcd có trong thư viên <numeric> sử dụng g++ 9.4.0 flag C++ 17 để  compile code
    // GDC: GREATEST COMMON DIVISOR - ƯỚC CHUNG LỚN NHẤT
    auto gcd = std::gcd(tu, mau);
    tu = tu / gcd;
    mau = mau / gcd;
    PhanSo result(1,1);
    *result.tuSo = tu;
    *result.mauSo = mau;

    return result;
}
// PhanSo PhanSo::operator-(const PhanSo&other){

// }
// PhanSo PhanSo::operator*(const PhanSo&other);
// PhanSo& PhanSo::operator+=(const PhanSo&other);
// PhanSo& PhanSo::operator-=(const PhanSo&other);
// PhanSo& PhanSo::operator*=(const PhanSo&other);
// PhanSo& PhanSo::operator/=(const PhanSo&other);
// bool PhanSo::operator==(const PhanSo&other);
// bool PhanSo::operator>(const PhanSo&other);
// bool PhanSo::operator<(const PhanSo&other);
// bool PhanSo::operator<=(const PhanSo&other);
// bool PhanSo::operator>=(const PhanSo&other);
// bool PhanSo::operator!=(const PhanSo&other);
void PhanSo::display(){
    cout<<*this->tuSo<<"/"<<*this->mauSo;
}

