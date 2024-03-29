#include "PhanSo.h"

PhanSo::PhanSo(){
    this->tuSo = 0;
    this->mauSo = 1;
}

PhanSo::~PhanSo(){
    //std::cout<<"Phan So terminated!"<<std::endl;
}

PhanSo::PhanSo(int n){
    this->tuSo = n;
    this->mauSo = 1;
}
PhanSo::PhanSo(int tu,int mau){
    this->tuSo=tu;
    this->mauSo=mau;
}

PhanSo::PhanSo(const PhanSo &other){
    this->tuSo = other.tuSo;
    this->mauSo = other.mauSo;
}

// Getter and setter
void PhanSo::setFraction(int tu,int mau){
    this->tuSo=tu;
    this->mauSo=mau;
}
// string PhanSo::getFraction(){
//     retu
// }
int PhanSo::getNumerator() const{
    return this->tuSo;
}
int PhanSo::getDenominator() const{
    return this->mauSo;
}

float PhanSo::getFloatValue() const{
    return (this->tuSo*1.0/this->mauSo);
}


void PhanSo::xuat()
{
    std::cout << "Phân số là: ";
    (this->mauSo ==1)?std::cout<<this->tuSo<<std::endl:std::cout << this->tuSo << "/" << this->mauSo << std::endl;

}

void PhanSo::nhap()
{
    std::cout << "Hãy nhập vào tử số " << std::endl;
    std::cin >> this->tuSo;
    int mau;
    do
    {
        std::cout << "Hãy nhập vào mẫu số" << std::endl;
        std::cin >> mau;
    }while(mau == 0);
    this->mauSo = mau;
}

void PhanSo::xuatKetQuaThuc()
{
    std::cout<<"Kết quả số thực là: ";
    std::cout << (tuSo * 1.0) / mauSo << std::endl;
}

PhanSo PhanSo::Cong(PhanSo &b)
{
    int tu = tuSo * b.mauSo + b.tuSo * mauSo;
    int mau = mauSo * b.mauSo;
    // Hàm gcd có trong thư viên <numeric> sử dụng g++ 9.4.0 flag C++ 17 để  compile code
    // GDC: GREATEST COMMON DIVISOR - ƯỚC CHUNG LỚN NHẤT
    auto gcd = std::gcd(tu, mau);
    tu = tu / gcd;
    mau = mau / gcd;
    PhanSo result;
    result.tuSo = tu;
    result.mauSo = mau;

    return result;
}

PhanSo PhanSo::Tru(PhanSo &b)
{
    int tu = tuSo * b.mauSo - b.tuSo * mauSo;
    int mau = mauSo * b.mauSo;
    // Hàm gcd có trong thư viên <numeric> sử dụng g++ 9.4.0 flag C++ 17 để  compile code
    // GDC: GREATEST COMMON DIVISOR - ƯỚC CHUNG LỚN NHẤT
    auto gcd = std::gcd(tu, mau);
    tu = tu / gcd;
    mau = mau / gcd;
    PhanSo result;
    result.tuSo = tu;
    result.mauSo = mau;

    return result;
}

PhanSo PhanSo::Nhan(PhanSo &b)
{
    int tu = tuSo * b.tuSo;
    int mau = mauSo * b.mauSo;
    // Hàm gcd có trong thư viên <numeric> sử dụng g++ 9.4.0 flag C++ 17 để  compile code
    // GDC: GREATEST COMMON DIVISOR - ƯỚC CHUNG LỚN NHẤT
    auto gcd = std::gcd(tu, mau);
    tu = tu / gcd;
    mau = mau / gcd;
    PhanSo result;
    result.tuSo = tu;
    result.mauSo = mau;

    return result;
}

PhanSo PhanSo::Chia(PhanSo &b)
{
    int tu = tuSo * b.mauSo;
    int mau = mauSo * b.tuSo;
    // Hàm gcd có trong thư viên <numeric> sử dụng g++ 9.4.0 flag C++ 17 để  compile code
    // GDC: GREATEST COMMON DIVISOR - ƯỚC CHUNG LỚN NHẤT
    auto gcd = std::gcd(tu, mau);
    tu = tu / gcd;
    mau = mau / gcd;
    PhanSo result;
    result.tuSo = tu;
    result.mauSo = mau;

    return result;
}

// Greater or equal
bool PhanSo::greaterOrEqual(PhanSo &b){
    if(this->getFloatValue()>b.getFloatValue())
        return true;
    return false;
}