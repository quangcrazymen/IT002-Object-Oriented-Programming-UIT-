#include <iostream>
#include "PhanSo.cpp"
using namespace std;
int main()
{
    PhanSo a(2, 1);
    PhanSo b(3, 4);
    PhanSo c(1, 1);
    cin >> c;
    cout << c;
    c = a + b;
    cout << c;
    c = a - b;
    cout << c;
    c = a * b;
    cout << c;
    c = a / b;
    cout << c;
    c+=b;
    cout<<c;
}