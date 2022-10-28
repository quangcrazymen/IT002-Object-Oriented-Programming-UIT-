#include "HocSinh.h"
using namespace std;
// Construtor

HocSinh::HocSinh(string name="Nguyen Van A",string id="21521467",string phoneNum="4562478942",float score=0.0){
    this->name=name;
    this->id=id;
    this->phoneNum=phoneNum;
    this->averageScore=score;
}

// getter and setter
string HocSinh::getName(){
    return this->name;
}

float HocSinh::getAverageScore(){
    return this->averageScore;
}


void HocSinh::input()
{
    cout << "Nhập vào Họ và tên: ";
    getline(cin, name);
    cout << "Nhập vào mã số sinh viên: ";
    getline(cin, id);
    cout << "Nhập vào điẹn thoại: ";
    getline(cin, phoneNum);
    cout << "Nhập vào điểm trung bình: ";
    cin >> averageScore;
}
void HocSinh::output()
{
    cout << "Họ và tên: " << this->name << endl;
    cout << "Mã số sinh viên: " << this->id << endl;
    cout << "Điện thoại: " << this->phoneNum << endl;
    cout << "Điểm trung bình: " << this->averageScore << endl;
}
