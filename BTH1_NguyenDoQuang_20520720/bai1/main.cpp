#include "PhanSo.cpp"
using namespace std;
int main(){
    // Bài 1:
    PhanSo a;
    a.Nhap();
    a.Xuat();
    a.XuatKetQuaThuc();
    PhanSo b;
    b.Nhap();
    cout<<"Kết quả phép cộng: "<<endl;
    a.Cong(b).Xuat();
    a.Cong(b).XuatKetQuaThuc();
    cout<<"Kết quả phép trừ: "<<endl;
    a.Tru(b).Xuat();
    a.Tru(b).XuatKetQuaThuc();
    cout<<"Kết quả phép nhân: "<<endl;
    a.Nhan(b).Xuat();
    a.Nhan(b).XuatKetQuaThuc();
    cout<<"Kết quả phép chia: "<<endl;
    a.Chia(b).Xuat();
    a.Chia(b).XuatKetQuaThuc();
    return 0;
}