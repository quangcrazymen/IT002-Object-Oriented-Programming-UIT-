#include "SoPhuc.h"
using namespace std;
//Constructor
SoPhuc::SoPhuc(int thuc,int ao=1)
{
    this->thuc=thuc;
    this->ao=ao;
}

SoPhuc SoPhuc::operator+(SoPhuc &other){
    SoPhuc result(1);
    result.thuc=this->thuc+other.thuc;
    result.ao=this->ao+other.ao;
    return result;
}

SoPhuc SoPhuc::operator-(){
    SoPhuc result(1);
    result.thuc=-this->thuc;
    result.ao=-this->ao;
    return result;
}

SoPhuc SoPhuc::operator=(SoPhuc &other){
    SoPhuc result(1);
    result.thuc=this->thuc;
    result.ao=this->ao;
    return result;
}

void SoPhuc::display(){
    cout<<this->thuc<<"+"<<this->ao<<"i"<<endl;
}



