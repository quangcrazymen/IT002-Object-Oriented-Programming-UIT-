#include "GiangVien.h"
using namespace std;

// Nhập, xuất
void GiangVien::nhap(){
    NhanSu::nhap();
    cin.ignore();
    cout<<"Nhập học hàm:";
    getline(cin,this->hocHam);
    cout<<"Nhập vào học vị";
    getline(cin,this->hocVi);
    cout<<"Năm giảng dạy";
    cin>>this->namGiangDay;
    cout<<"Nhập vào số môn học:";
    string subject;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>subject;
        this->danhSachMonHoc.push_back(subject);
    }
}

void GiangVien::xuat(){
    NhanSu::xuat();
    cout<<"Học hàm là:"<<this->hocHam<<'\n';
    cout<<"Học vị là:"<<this->hocVi<<'\n';
    cout<<"Năm giảng dạy là:"<<this->namGiangDay<<'\n';
    for(auto i:this->danhSachMonHoc){
        cout<<i<<' ';
    }
    cout<<'\n';
}

