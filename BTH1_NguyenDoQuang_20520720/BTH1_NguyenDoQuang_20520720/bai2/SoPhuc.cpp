#include "SoPhuc.h"
#include <iostream>

SoPhuc::SoPhuc(){
    thuc = 0;
    ao = 0;
}

SoPhuc::SoPhuc(float thuc,float ao){
    this->thuc = thuc;
    this->ao = ao;
}

void SoPhuc::Xuat()
{
    std::cout << "Số Phức là: ";
    std::cout << this->thuc << "+" << this->ao <<"i"<< std::endl;
}

void SoPhuc::Nhap()
{
    std::cout << "Hãy nhập vào phần thực" << std::endl;
    std::cin >> this->thuc;
    int mau;

    std::cout << "Hãy nhập vào phần ảo" << std::endl;
    std::cin >> ao;
    this->ao = ao;
}

SoPhuc SoPhuc::Cong(SoPhuc &b){
    SoPhuc result;
    result.thuc = this->thuc + b.thuc;
    result.ao = this->ao + b.ao;
    return result;
}

SoPhuc SoPhuc::Tru(SoPhuc &b){
    SoPhuc result;
    result.thuc = this->thuc - b.thuc;
    result.ao = this->ao - b.ao;
    return result;    
}

SoPhuc SoPhuc::Nhan(SoPhuc &b){
    SoPhuc result;
    result.thuc = this->thuc*b.thuc - this->ao * b.ao;
    result.ao = this->thuc*b.ao + this->ao*b.thuc;
    return result;
}

SoPhuc SoPhuc::Chia(SoPhuc &b){
    SoPhuc result;
    float mau = (b.thuc*b.thuc + b.ao*b.ao);
    result.thuc = (this->thuc*b.thuc + this->ao * b.ao)/mau;
    result.ao = (b.thuc*this->ao - b.ao * this->thuc)/mau;
    return result;
}