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

bool idValidation(string id){
    if(id.length()!=8){
        return 0;
    }
    // ASCII table: https://www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-61.php
    for(auto &i:id){
        if(i<48||i>57){
            return 0;
        }
    }
    return 1;
}

bool phoneValidation(string phone){
    if(phone.length()<9||phone.length()>11){
        return 0;
    }
    // ASCII table: https://www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-61.php
    for(auto &i:phone){
        if(i<48||i>57){
            return 0;
        }
    }
    return 1;
}

bool nameValidation(string name){
    // ASCII table: https://www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-61.php
    for(auto &i:name){
        if((i==32)||(i>64&&i<91)||(i>96&&i<123)){
            continue;
        }
        else{
            return 0;
        }
    }
    return 1;
}
void HocSinh::input()
{
    cout << "Nhập vào Họ và tên: ";
    getline(cin, name);
    while(!nameValidation(name)){
        cout << "Nhập lại Họ và tên: ";
        getline(cin, name);
    }
    cout << "Nhập vào mã số sinh viên: ";
    getline(cin, id);
    while(!idValidation(id)){
        cout << "Nhập lại mã số sinh viên: ";
        getline(cin, id);
    }
    cout << "Nhập vào điẹn thoại: ";
    getline(cin, phoneNum);
    while(!phoneValidation(phoneNum)){
        cout << "Nhập lại điện thoại: ";
        getline(cin, phoneNum);
    }
    cout << "Nhập vào điểm trung bình: ";
    cin >> averageScore;
    while(averageScore<0.0 || averageScore>10.f){
        cout<<"Nhập lại điểm: ";
        cin>>averageScore;
    }
}
void HocSinh::output()
{
    cout << "Họ và tên: " << this->name << endl;
    cout << "Mã số sinh viên: " << this->id << endl;
    cout << "Điện thoại: " << this->phoneNum << endl;
    cout << "Điểm trung bình: " << this->averageScore << endl;
}
