#include "PhanSo.h"
#include <iostream>
#include <numeric>

void PhanSo::Xuat()
{
    std::cout << "Phân số là: ";
    (this->mauSo ==1)?std::cout<<this->tuSo<<std::endl:std::cout << this->tuSo << "/" << this->mauSo << std::endl;

}

void PhanSo::Nhap()
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

void PhanSo::XuatKetQuaThuc()
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