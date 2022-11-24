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

NhanSu::NhanSu(string ten="",string date="",string ma="")
{
    this->name = ten;
    this->date = date;
    this->maNhanSu = ma;
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
    cout<<"Nhập tên: ";
    getline(cin,this->maNhanSu);
}

void NhanSu::xuat(){
    cout<<"Tên: "<<this->name<<'\n';
    cout<<"Ngày sinh: "<<this->date<<'\n';
    cout<<"Mã nhân sự: "<<this->maNhanSu<<'\n';
}

NhanSu::~NhanSu()
{
}