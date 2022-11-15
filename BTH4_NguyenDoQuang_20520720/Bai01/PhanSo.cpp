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

PhanSo& PhanSo::operator=(const PhanSo&ps){
    if(this==&ps){
        return *this;
    }
    *this->tuSo = *ps.tuSo;
    *this->mauSo = *ps.mauSo;
    return *this;
}

// Input and Output
istream& operator>> (istream &is,PhanSo &ps){
    cout << "Hãy nhập vào tử số " << std::endl;
    cin >> *ps.tuSo;
    int mau;
    do
    {
        std::cout << "Hãy nhập vào mẫu số" << std::endl;
        std::cin >> mau;
    }while(mau == 0);
    *ps.mauSo = mau;
    return is;
}
ostream& operator<< (ostream &os,PhanSo &ps){
    os << "Phân số là: ";
    (*ps.mauSo ==1)?os<<*ps.tuSo<<std::endl:os << *ps.tuSo << "/" << *ps.mauSo << std::endl;
    return os;
}
    

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

PhanSo PhanSo::operator-(const PhanSo&b){
    int tu = *this->tuSo * *b.mauSo - *b.tuSo * *this->mauSo;
    int mau = *this->mauSo * *b.mauSo;
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

PhanSo PhanSo::operator*(const PhanSo&b){
    int tu = *this->tuSo * *b.tuSo;
    int mau = *this->mauSo * *b.mauSo;
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

PhanSo PhanSo::operator/(const PhanSo&b){
    int tu = *this->tuSo * *b.mauSo;
    int mau = *this->mauSo * *b.tuSo;
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

