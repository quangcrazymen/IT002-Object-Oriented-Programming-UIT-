#include "PhanSo.cpp"
#include "DSPhanSo.cpp"
#include <cstdio>
using namespace std;
int main(){
    DSPhanSo a;
    a.inputList();
    a.outputList();
    cout<<"Tổng của các phân số trong mảng là: ";
    a.sumOfFraction().Xuat();
    cout<<"Phấn số lớn nhất trong mảng: ";
    a.biggestFraction()->Xuat();
    cout<<"Phấn số nhỏ nhất trong mảng: ";
    a.smallestFraction()->Xuat();
    cout<<"mảng phân số tăng dần là: ";

    a.sortAscList();
    // for(auto i=1;i<4;i++){
    //     cout<<*(pt+i*4)<<endl;
    // }
    return 0;
}