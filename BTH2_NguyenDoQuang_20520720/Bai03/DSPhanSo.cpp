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
}
// Tính tổng các phân số
PhanSo DSPhanSo::sumOfFraction(){
    PhanSo sum;
    for (auto i=0;i<this->size;i++){
        sum = sum.Cong(this->list[i]);
    }
    return sum;
}
// Tìm phân số lớn nhất
PhanSo* DSPhanSo::biggestFraction(){
    float max= -numeric_limits<float>::max();
    int maxIdx=0;
    for (auto i=0;i<this->size;i++){
        if((this->list[i].getNumerator()*1.0/this->list[i].getDenominator())>max){
            max = (this->list[i].getNumerator()/this->list[i].getDenominator())*1.0;
            maxIdx=i;
        }
    }
    return this->list+maxIdx;

}
// Tìm phân số nhỏ nhất
PhanSo* DSPhanSo::smallestFraction(){
    float min= numeric_limits<float>::max();
    int minIdx=0;
    for (auto i=0;i<this->size;i++){
        if((this->list[i].getNumerator()*1.0/this->list[i].getDenominator())<min){
            min = (this->list[i].getNumerator()/this->list[i].getDenominator())*1.0;
            minIdx=i;
        }
    }
    return this->list+minIdx;
}

// WRITE A CUSTOM MERGE SORT !!

// Sắp xếp danh sách phân số tăng dần
DSPhanSo DSPhanSo::sortAscList(){
    float floatList[this->size];
    // cout<<this->size;
    // cout<<sizeof(floatList);
    for (auto i=0;i<this->size;i++){
        // get the float value of the fractions list
        float floatValue = (this->list[i].getNumerator()*1.0/this->list[i].getDenominator());
        floatList[i] = floatValue;
        
    }

}
// Sắp xếp danh sách phân số giảm dần
DSPhanSo DSPhanSo::sortDscList(){

}

DSPhanSo::~DSPhanSo()
{
    cout<<"DSPhanSo is terminated"<<endl;
}