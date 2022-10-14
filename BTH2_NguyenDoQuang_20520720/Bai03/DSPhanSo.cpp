#include "DSPhanSo.h"
using namespace std;
// DSPhanSo::DSPhanSo(/* args */)
// {

// }

// Viết chương trình cho phép người dùng nhập vào danh sách các phân số
void DSPhanSo::inputList(){
    cout<<"Hãy nhập số phần tử của danh sách phân số: ";
    cin>>this->size;
    this->list = new PhanSo[size];
    for (auto i=0;i<size;i++){
        PhanSo newElement;  
        newElement.Nhap();
        list[i]=newElement;
    }
}

void DSPhanSo::outputList(){
    for (auto i=0;i<this->size;i++){
        this->list[i].Xuat();
    }
    cout<<sizeof(this->list);
    cout<<sizeof(PhanSo);
}
// Tính tổng các phân số
void DSPhanSo::sumOfFraction(){

}
// Tìm phân số lớn nhất
void DSPhanSo::biggestFraction(){

}
// Tìm phân số nhỏ nhất
void DSPhanSo::smallestFraction(){

}
// Sắp xếp danh sách phân số tăng dần
void DSPhanSo::sortAscList(){

}
// Sắp xếp danh sách phân số giảm dần
void DSPhanSo::sortDscList(){

}

DSPhanSo::~DSPhanSo()
{
    // free(this->list);
    cout<<"DSPhanSo is terminated"<<endl;
}