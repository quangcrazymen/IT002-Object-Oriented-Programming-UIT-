#include "PhanSo.h"
using namespace std;
PhanSo::PhanSo(int tu,int mau){
    tuSo=new int(tu);
    mauSo=new int(mau);
}

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

PhanSo& PhanSo::operator+=(const PhanSo&b){
    int tu = *this->tuSo * *b.mauSo + *b.tuSo * (*this->mauSo);
    int mau = *this->mauSo * (*b.mauSo);
    // Hàm gcd có trong thư viên <numeric> sử dụng g++ 9.4.0 flag C++ 17 để  compile code
    // GDC: GREATEST COMMON DIVISOR - ƯỚC CHUNG LỚN NHẤT
    auto gcd = std::gcd(tu, mau);
    *this->tuSo = tu / gcd;
    *this->mauSo= mau / gcd;
    return *this;
}
PhanSo& PhanSo::operator-=(const PhanSo&b){
    int tu = *this->tuSo * *b.mauSo - *b.tuSo * *this->mauSo;
    int mau = *this->mauSo * *b.mauSo;
    // Hàm gcd có trong thư viên <numeric> sử dụng g++ 9.4.0 flag C++ 17 để  compile code
    // GDC: GREATEST COMMON DIVISOR - ƯỚC CHUNG LỚN NHẤT
    auto gcd = std::gcd(tu, mau);
    *this->tuSo = tu / gcd;
    *this->mauSo= mau / gcd;
    return *this;
}
PhanSo& PhanSo::operator*=(const PhanSo&b){
    int tu = *this->tuSo * *b.tuSo;
    int mau = *this->mauSo * *b.mauSo;
    // Hàm gcd có trong thư viên <numeric> sử dụng g++ 9.4.0 flag C++ 17 để  compile code
    // GDC: GREATEST COMMON DIVISOR - ƯỚC CHUNG LỚN NHẤT
    auto gcd = std::gcd(tu, mau);
    *this->tuSo = tu / gcd;
    *this->mauSo= mau / gcd;
    return *this;
}
PhanSo& PhanSo::operator/=(const PhanSo&b){
    int tu = *this->tuSo * *b.mauSo;
    int mau = *this->mauSo * *b.tuSo;
    // Hàm gcd có trong thư viên <numeric> sử dụng g++ 9.4.0 flag C++ 17 để  compile code
    // GDC: GREATEST COMMON DIVISOR - ƯỚC CHUNG LỚN NHẤT
    auto gcd = std::gcd(tu, mau);
    *this->tuSo = tu / gcd;
    *this->mauSo= mau / gcd;
    return *this;
}
bool PhanSo::operator==(const PhanSo&ps){
    int result = *this->tuSo**ps.mauSo - *this->mauSo**ps.tuSo;
    if(result == 0){
        return true;
    }
    return false;
}
bool PhanSo::operator>(const PhanSo&ps){
    int result = *this->tuSo**ps.mauSo - *this->mauSo**ps.tuSo;
    if(result > 0){
        return true;
    }
    return false;
}
bool PhanSo::operator<(const PhanSo&ps){
    int result = *this->tuSo**ps.mauSo - *this->mauSo**ps.tuSo;
    if(result < 0){
        return true;
    }
    return false;
}
bool PhanSo::operator<=(const PhanSo&ps){
    int result = *this->tuSo**ps.mauSo - *this->mauSo**ps.tuSo;
    if(result <= 0){
        return true;
    }
    return false;
}
bool PhanSo::operator>=(const PhanSo&ps){
    int result = *this->tuSo**ps.mauSo - *this->mauSo**ps.tuSo;
    if(result >= 0){
        return true;
    }
    return false;
}
bool PhanSo::operator!=(const PhanSo&ps){
    int result = *this->tuSo**ps.mauSo - *this->mauSo**ps.tuSo;
    if(result != 0){
        return true;
    }
    return false;
}

PhanSo& PhanSo::operator++(int){
    PhanSo temp(1,1);
    temp=*this+PhanSo(1,1);
    *this=temp;
    return *this;
}
PhanSo& PhanSo::operator--(int){
    PhanSo temp(1,1);
    temp=*this-PhanSo(1,1);
    *this=temp;
    return *this;
}

void PhanSo::display(){
    cout<<*this->tuSo<<"/"<<*this->mauSo;
}

