#include "DSPhanSo.h"
using namespace std;

// Viết chương trình cho phép người dùng nhập vào danh sách các phân số
void DSPhanSo::inputList(){
    cout<<"Hãy nhập số phần tử của danh sách phân số: ";
    cin>>this->size;
    this->list = new PhanSo[size];
    for (auto i=0;i<size;i++){
        PhanSo newElement;  
        newElement.nhap();
        list[i]=newElement;
    }
}

void DSPhanSo::outputList(){
    for (auto i=0;i<this->size;i++){
        this->list[i].xuat();
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
        if(this->list[i].getFloatValue()>=max){
            max = this->list[i].getFloatValue();
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
        if(this->list[i].getFloatValue()<=min){
            min = this->list[i].getFloatValue();
            minIdx=i;
        }
    }
    return this->list+minIdx;
}


static void Merge(PhanSo *A, int low, int mid, int high,bool asc=false){
    int i = low;
    int j = mid+1;
    int k = low;
    PhanSo B[high+1];
    while (i <= mid && j <= high){
        if (A[i].greaterOrEqual(A[j])==asc){
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid){
        B[k++] = A[i++];
    }
    while (j <= high){
        B[k++] = A[j++];
    }
    for (int i=low; i<=high; i++){
        A[i] = B[i];
    }
}
// Sắp xếp danh sách phân số tăng dần
// Using CUSTOM MERGE SORT
void DSPhanSo::sortAscList(){
    int p;
    for (p=2; p<this->size; p=p*2){
        for (int i=0; i+p-1<this->size; i=i+p){
            int low = i;
            int high = i+p-1;
            int mid = (low+high)/2;
            Merge(this->list, low, mid, high);
        }
    }
    if (p/2 < this->size){
        Merge(this->list, 0, p/2-1, this->size-1);
    }
}
// Sắp xếp danh sách phân số giảm dần
void DSPhanSo::sortDscList(){
    int p;
    for (p=2; p<this->size; p=p*2){
        for (int i=0; i+p-1<this->size; i=i+p){
            int low = i;
            int high = i+p-1;
            int mid = (low+high)/2;
            Merge(this->list, low, mid, high,true);
        }
    }
    if (p/2 < this->size){
        Merge(this->list, 0, p/2-1, this->size-1,true);
    }
}

DSPhanSo::~DSPhanSo()
{
    delete [] this->list;
    cout<<"DSPhanSo is terminated"<<endl;
}