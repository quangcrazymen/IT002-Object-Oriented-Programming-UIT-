#include "SoPhuc.h"
#include <iostream>

using namespace std;

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
    cout << "Số Phức là: ";
    cout << this->thuc << "+" << this->ao <<"i"<< endl;
}

void SoPhuc::Nhap()
{
    cout << "Hãy nhập vào phần thực" << endl;
    cin >> this->thuc;
    cout << "Hãy nhập vào phần ảo" << endl;
    cin >> ao;
    this->ao = ao;
}

istream& operator>> (istream &is,SoPhuc &sp){
    cout << "Hãy nhập vào phần thực" << endl;
    is >> sp.thuc; 
    cout << "Hãy nhập vào phần ảo" << endl;
    is >> sp.ao;
    return is;
}
ostream&operator<<(ostream& os,const SoPhuc &sp){
    os << "Số Phức là: "<< sp.thuc << "+" << sp.ao <<"i"<< endl;
    return os;
}

SoPhuc SoPhuc::operator+(SoPhuc &b){
    SoPhuc result;
    result.thuc = this->thuc + b.thuc;
    result.ao = this->ao + b.ao;
    return result;
}

SoPhuc SoPhuc::operator-(SoPhuc &b){
    SoPhuc result;
    result.thuc = this->thuc - b.thuc;
    result.ao = this->ao - b.ao;
    return result;    
}

SoPhuc SoPhuc::operator*(SoPhuc &b){
    SoPhuc result;
    result.thuc = this->thuc*b.thuc - this->ao * b.ao;
    result.ao = this->thuc*b.ao + this->ao*b.thuc;
    return result;
}

SoPhuc SoPhuc::operator/(SoPhuc &b){
    SoPhuc result;
    float mau = (b.thuc*b.thuc + b.ao*b.ao);
    result.thuc = (this->thuc*b.thuc + this->ao * b.ao)/mau;
    result.ao = (b.thuc*this->ao - b.ao * this->thuc)/mau;
    return result;
}

bool SoPhuc::operator==(const SoPhuc &other)
{
    if(this->thuc==other.thuc&&this->ao==other.ao){
        return true;
    }
    return false;
}

bool SoPhuc::operator!=(const SoPhuc &other)
{
    if(this->thuc==other.thuc&&this->ao==other.ao){
        return false;
    }
    return true;
}