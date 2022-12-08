#include "TroGiang.h"
using namespace std;
void TroGiang::nhap()
{
    NhanSu::nhap();
    cout << "Nhập vào số môn học trợ giảng:";
    int n;
    cin >> this->soMonTroGiang;
}

void TroGiang::xuat()
{
    NhanSu::xuat();
    cout << "Số môn học trợ giảng:"<<this->soMonTroGiang<<endl;
}