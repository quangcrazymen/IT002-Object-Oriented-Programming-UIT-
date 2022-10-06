#include "TestCandidate.h"
#include "Candidate.h"
#include <iostream>
using namespace std;
void Candidate::setThongTinSV(string ma, string ten, string date, float diemToan, float diemVan, float diemAnh){
    this->ma = ma;
    this->ten = ten;
    this->date = date;
    this->diemToan = diemToan;
    this->diemVan = diemVan;
    this->diemAnh = diemAnh;
}

float Candidate::getDiemTong(){
    return (diemToan + diemVan + diemAnh)*1.0;
}

void Candidate::Xuat(){
    cout<<"Mã sinh viên là: "<<ma<<endl;
    cout<<"Tên sinh viên là: "<<ten<<endl;
    cout<<"Ngày sinh của sinh viên là: "<<date<<endl;
    cout<<"Điểm toán sinh viên là: "<<diemToan<<endl;
    cout<<"Điểm văn sinh viên là: "<<diemVan<<endl;
    cout<<"Điểm anh sinh viên là: "<<diemAnh<<endl;
    cout<<"Tổng điểm của sinh viên là: "<<getDiemTong()<<endl;
}