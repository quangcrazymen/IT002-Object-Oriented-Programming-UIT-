#include "ChuyenVien.h"
using namespace std;

void ChuyenVien::nhap(){
    NhanSu::nhap();
    cout<<"Số năm kinh nghiệm: ";
    cin>>this->knLamViec;
    cout<<"Số dự án đã làm:";
    int n;cin>>n;
    cout<<"Tên các dự án đã làm:";
    string project;
    for(int i=0;i<n;i++){
        cin>>project;
        this->duAnGiaoDuc.push_back(project);
    }
}

void ChuyenVien::xuat(){
    NhanSu::xuat();
    cout<<"Số năm kinh nghiệm: "<<this->knLamViec<<endl;
    cout<<"Tên các dự án đã làm:";
    for(int i=0;i<this->duAnGiaoDuc.size();i++){
        cout<<duAnGiaoDuc[i]<<' ';
    }
    cout<<'\n';
}
