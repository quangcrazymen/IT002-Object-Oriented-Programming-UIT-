#include "GiangVien.h"
using namespace std;
GiangVien::GiangVien(string name,string date,string ma,string hocHam,
string hocVi,int nam, vector<string>list=vector<string>(1,"")):NhanSu(name,date,ma){
    this->hocHam=hocHam;
    this->hocVi=hocVi;
    this->namGiangDay=nam;
    this->danhSachMonHoc = list;
}
// Nhập, xuất
void GiangVien::nhap(){

}

void GiangVien::xuat(){
    NhanSu::xuat();
    cout<<"Học hàm là:"<<this->hocHam<<'\n';
    cout<<"Học vị là:"<<this->hocVi<<'\n';
    cout<<"Năm giảng dạy là:"<<this->namGiangDay<<'\n';
    // cout<<"Học hàm là:"<<this->hocHa<<'\n';
    // output names of subjects
    //Luong this->tinh luong
}

GiangVien::~GiangVien()
{
}