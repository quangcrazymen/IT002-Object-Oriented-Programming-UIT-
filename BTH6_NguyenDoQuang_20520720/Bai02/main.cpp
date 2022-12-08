//https://stackoverflow.com/questions/4571611/making-operator-virtual
#include <iostream>
#include <vector>
#include <string>
#include <ostream>
#include <istream>
#include "NhanVien.cpp"
#include "GiangVien.cpp"
#include "NghienCuuVien.cpp"
#include "NhanVienVanPhong.cpp"
#include "QLNV.cpp"

using namespace std;

int main(){
    QLNV a;
    cin>>a;
    cout<<a;
    // NhanVien *a= new GiangVien();
    // cin>>*a;
    // cout<<*a;
    // cout<<"Tổng lương của nhân sự là: "<<management.tinhLuong()<<'\n';
    // NhanVien *b=new NghienCuuVien();
    // cin>>*b;
    // cout<<*b;
}
