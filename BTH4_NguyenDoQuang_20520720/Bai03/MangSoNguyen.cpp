#include "MangSoNguyen.h"

using namespace std;


MangSoNguyen::MangSoNguyen(/* args */)
{

}

MangSoNguyen::~MangSoNguyen()
{

}


istream& operator>> (istream &is,MangSoNguyen &sn){
    cout<<"Nhập vào số phần tử của mảng: ";
    is>>sn.kichthuoc;
    sn.dulieu = new int[sn.kichthuoc];
    for(int i=0;i<sn.kichthuoc;i++){
        cout<<"Giá trị "<<i<<" là: ";
        is>>sn.dulieu[i];
    }
    return is;
}

ostream& operator<< (ostream &os,MangSoNguyen &sn){
    cout<<"Các số nguyên trong mảng là: ";
    for(int i=0;i<sn.kichthuoc;i++){
        os<<sn.dulieu[i]<<" ";
    }
    cout<<"\n";
    return os;
}

MangSoNguyen& MangSoNguyen::operator=(const MangSoNguyen&){

}


MangSoNguyen MangSoNguyen::operator+(const MangSoNguyen&sn){
    int smaller=this->kichthuoc>=sn.kichthuoc?sn.kichthuoc:this->kichthuoc;
    int bigger=this->kichthuoc<=sn.kichthuoc?sn.kichthuoc:this->kichthuoc;
    //init an temp array
    int *temp=new int[bigger];
    for(int i=0;i<bigger;i++){
        temp[i]=0;
    }
    // map the smaller array to the temp array
    for(int i=0;i<smaller;i++){
        if(this->kichthuoc<=sn.kichthuoc){
            temp[i]=this->dulieu[i];
        }
        else{
            temp[i]=sn.dulieu[i];
        }
    }
    MangSoNguyen result;
    result.kichthuoc=bigger;
    result.dulieu=new int[bigger];
    for(int i=0;i<bigger;i++){
        if(this->kichthuoc<=sn.kichthuoc){
            result.dulieu[i]=sn.dulieu[i]+temp[i];
        }
        else{
            result.dulieu[i]=this->dulieu[i]+temp[i];
        }
    }
    return result;
}

MangSoNguyen& MangSoNguyen::operator++(int x){
    for(int i=0;i<this->kichthuoc;i++){
        this->dulieu[i]+=1;
    }
    return *this;
}

MangSoNguyen& MangSoNguyen::operator--(int x){
    for(int i=0;i<this->kichthuoc;i++){
        this->dulieu[i]-=1;
    }
    return *this;
}
