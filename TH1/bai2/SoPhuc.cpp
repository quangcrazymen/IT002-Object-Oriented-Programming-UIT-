#include "SoPhuc.h"
#include <iostream>
void SoPhuc::Xuat()
{
    std::cout << "Số Phức là: ";
    std::cout << this->thuc << "/" << this->ao << std::endl;
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