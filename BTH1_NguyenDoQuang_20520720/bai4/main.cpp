#include "Candidate.cpp"
#include "TestCandidate.cpp"
//#include<iostream>
//#include<string>
using namespace std;
int main()
{
    TestCandidate a;
    a.Nhap();
    cout<<"THÔNG TIN CỦA SINH VIÊN: \n"<<endl;
    a.Xuat();
    cout<<"\nTHÔNG TIN CỦA SINH VIÊN CÓ TỔNG ĐIỂM LỚN HƠN 15: \n"<<endl;
    a.XuatLonHon15();
    return 0;
}