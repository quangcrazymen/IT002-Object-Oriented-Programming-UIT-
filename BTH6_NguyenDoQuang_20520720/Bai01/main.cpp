//https://stackoverflow.com/questions/4571611/making-operator-virtual
#include <iostream>
#include <vector>
#include <string>
#include <ostream>
#include <istream>
#include "CanBo.cpp"
#include "CanBoNhaNuoc.cpp"
#include "CanBoHopDong.cpp"
#include "QLCB.cpp"

using namespace std;

int main(){
    QLCB a;
    cin>>a;
    cout<<a;
    cout<<"Tổng tiền lương mà công ty phải trả cho cán bộ là:"<<a.tinhLuong()<<endl;
}
