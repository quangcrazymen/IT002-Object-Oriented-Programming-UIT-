#include "NhanVien.h"
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

NhanVien::NhanVien(string ten="",string date="",string ma="")
{
    this->name = ten;
    this->date = date;
}

string NhanVien::getName(){
    return this->name;
}

void NhanVien::nhap(){
    cin.ignore();
    cout<<"Nhập tên: ";
    getline(cin,this->name);
    cout<<"Nhập ngày sinh: ";
    getline(cin,this->date);
}

void NhanVien::xuat(){
    cout<<"Tên: "<<this->name<<'\n';
    cout<<"Ngày sinh: "<<this->date<<'\n';
}

NhanVien::~NhanVien()
{
}