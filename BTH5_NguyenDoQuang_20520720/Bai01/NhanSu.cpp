#include "NhanSu.h"
using namespace std;

// global function to calculate number of certain project type
static int numberOfXProject(char pro,vector<string>&list){
    int count=0;
    for(auto &i:list){
        if(i[0]==pro){
            count+=1;
        }
    }
    return count;
}


string NhanSu::getName(){
    return this->name;
}

void NhanSu::nhap(){
    cin.ignore();
    cout<<"Nhập tên: ";
    getline(cin,this->name);
    cout<<"Nhập ngày sinh: ";
    getline(cin,this->date);
    cout<<"Nhập mã: ";
    getline(cin,this->maNhanSu);
}

void NhanSu::xuat(){
    cout<<"Tên: "<<this->name<<'\n';
    cout<<"Ngày sinh: "<<this->date<<'\n';
    cout<<"Mã nhân sự: "<<this->maNhanSu<<'\n';
}
