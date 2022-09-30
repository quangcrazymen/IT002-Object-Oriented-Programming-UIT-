#include "PhanSo.h"
#include<iostream>
#include <numeric>

PhanSo::PhanSo(){
    this->tuSo = 0;
    this->mauSo = 1;
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
// Hàm nhập xuất phân số
void PhanSo::Xuat(){
    std::cout<<"Phân số là: ";
    std::cout<<this->tuSo<<"/"<<this->mauSo<<std::endl;
}

void PhanSo::Nhap(){
    std::cout<<"Hãy nhập vào tử số và mẫu số"<<std::endl;
    std::cin>>this->tuSo>>this->mauSo;
}

// Hàm get tử số và mẫu số
int PhanSo::getTuSo(){
    return this->tuSo;
}
int PhanSo::getMauSo(){
    return this->mauSo;
}

PhanSo PhanSo::Cong(PhanSo elements[2]){
    int tu = elements[0].tuSo*(elements[1].mauSo)+elements[1].tuSo*elements[0].mauSo;
    int mau = elements[0].mauSo * elements[1].mauSo;
    // Hàm gcd có trong thư viên <numeric> sử dụng g++ 9.4.0 flag C++ 17 để  compile code
    // GDC: GREATEST COMMON DIVISOR - ƯỚC CHUNG LỚN NHẤT
    auto gcd = std::gcd(tu,mau);
    tu = tu/gcd;
    mau = mau/gcd;
    PhanSo result;
    result.tuSo = tu;
    result.mauSo = mau;

    return result;
}

