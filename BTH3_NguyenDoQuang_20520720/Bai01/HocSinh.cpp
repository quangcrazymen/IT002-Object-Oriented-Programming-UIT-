#include "HocSinh.h"
using namespace std;
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

