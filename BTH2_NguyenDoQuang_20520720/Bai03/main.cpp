#include "PhanSo.cpp"
#include "DSPhanSo.cpp"
#include <cstdio>
using namespace std;
int main()
{
    DSPhanSo a;
    a.inputList();
    a.outputList();
    cout << "Tổng của các phân số trong mảng là: ";
    a.sumOfFraction().xuat();
    cout << "Phấn số lớn nhất trong mảng: ";
    a.biggestFraction()->xuat();
    cout << "Phấn số nhỏ nhất trong mảng: ";
    a.smallestFraction()->xuat();
    cout << "mảng phân số tăng dần là: ";
    a.sortAscList();
    a.outputList();
    cout << "mảng phân số giảm dần là: ";
    a.sortDscList();
    a.outputList();
    return 0;
}