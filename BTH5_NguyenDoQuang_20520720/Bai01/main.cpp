#include <iostream>
#include<vector>
#include "NhanSu.cpp"
#include "GiangVien.cpp"
#include "TroGiang.cpp"
#include "NghienCuuVien.cpp"
#include "ChuyenVien.cpp"
#include "QLNS.cpp"

using namespace std;

int main(){
    GiangVien a("Nguyen Van A","1/2/2000","12345678","TienSi","Pho giao su",12);
    NghienCuuVien b(2,vector<string>{"D01","D02","F21"});
    NhanSu* test = new NghienCuuVien(2,vector<string>{"D01","D02","F21"});
    
    cout<<test->tinhLuong();
    // a.xuat();
    printf("hello0");
}
// class quan li nhan su
// vector<NhanSu*> 