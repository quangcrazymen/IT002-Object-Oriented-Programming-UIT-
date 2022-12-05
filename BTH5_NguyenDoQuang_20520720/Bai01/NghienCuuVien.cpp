#include "NghienCuuVien.h"
using namespace std;

NghienCuuVien::NghienCuuVien(int kn,vector<string> duAn){
    this->duAnNghienCuu = duAn;
    this->knNghienCuu=kn;

}

void NghienCuuVien::nhap(){
    NhanSu::nhap();
    cout<<"Số năm kinh nghiệm: ";
    cin>>this->knNghienCuu;
    cout<<"Số dự án đã làm:";
    int n;cin>>n;
    cout<<"Tên các dự án đã làm:";
    string project;
    for(int i=0;i<n;i++){
        cin>>project;
        this->duAnNghienCuu.push_back(project);
    }
}

void NghienCuuVien::xuat(){
    NhanSu::xuat();
    cout<<"Số năm kinh nghiệm: "<<this->knNghienCuu<<endl;
    cout<<"Tên các dự án đã làm:";
    for(auto i:this->duAnNghienCuu){
        cout<<i<<' ';
    }
    cout<<'\n';
}