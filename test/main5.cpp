#include<iostream>
using namespace std;

class PhanSo

{

    private:        

        int tuSo;

        int mauSo;

    public:         

        PhanSo();               // constructor (1) 

        PhanSo(int n);          // constructor (2)

        PhanSo(int tu, int mau);// constructor (3)

        PhanSo(const PhanSo& other); // constructor (4)



        void Nhap();

        void Xuat(); 

        PhanSo Cong(PhanSo other);

};



/////////// PhanSo.cpp ////////////////

PhanSo::PhanSo() 

{	

    // TO DO: Add your code here

    // tao phan so voi tu so = 1, mau so = 1
    this->tuSo=1;
    this->mauSo=1;
}



PhanSo::PhanSo(int n)

{

    // TO DO: Add your code here

    // tao phan so voi tu so = 1. Neu  tham so n!=0, gan mau so = n; nguoc lai mau so = 1
    this->tuSo=1;
    if(n!=0){
        this->mauSo = n;
    }
    else{
        this->mauSo = 1;
    }
}



PhanSo::PhanSo(int tu, int mau)

{

    // TO DO: Add your code here

    // tao phan so voi tu so = tu. Neu tham so mau!=0, gan mau so = mau; nguoc lai mau so = 1
    this->tuSo=tu;
    if(mau!=0){
        this->mauSo = mau;
    }
    else{
        this->mauSo = 1;
    }
}



PhanSo::PhanSo(const PhanSo& other)

{

    // TO DO: Add your code here
    this->tuSo=other.tuSo;
    this->mauSo=other.mauSo;
}

void PhanSo::Nhap() 

{

    cout << "Nhap tu so: " << endl;

    cin >> tuSo;

    cout << "Nhap mau so: " << endl;

    cin >> mauSo;

}



void PhanSo::Xuat() 

{

    cout << "Phan So: " << tuSo << "/" << mauSo << endl;

}



PhanSo PhanSo::Cong(PhanSo other)

{

    PhanSo kq;

    

    // TO DO: Add your code here
    kq.tuSo=this->tuSo*other.mauSo+other.tuSo*this->mauSo;
    kq.mauSo = this->mauSo*other.mauSo;
    return kq;

}



/////////// Test.cpp ////////////////

int main() {

    // UC1: Khoi tao  phan so

    PhanSo ps1, ps2(2), ps3(3,4);

    ps1.Xuat();

    ps2.Xuat();

    ps3.Xuat();

    

    // UC2: Cong 2 phan so

    PhanSo ps4(ps2); 

    ps4.Cong(ps3).Xuat();

}