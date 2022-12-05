#include "QLNS.h"

using namespace std;

void QLNS::nhap(){
    int n;
    cout<<"So Nhan su:";
    cin>>n;
    for(int i =0;i<n;i++){
        cout<<"Giảng viên nhập,trợ giảng, nghiên cứu viên, chuyên viên? {1, 2, 3, 4}:";
        int option;cin>>option;
        NhanSu *tmp;
        switch (option)
        {
        case 1:
            tmp =new GiangVien();
            break;
        case 2:
            tmp =new TroGiang();
            break;
        case 3: 
            tmp=new NghienCuuVien();
        case 4:
            tmp=new ChuyenVien();
        default:
            break;
        }
        tmp->nhap();
        this->dsNhanSu.push_back(tmp);
}



void QLNS::xuat(){
    for(NhanSu* nhansu:dsNhanSu){
        nhansu->Xuat();
    }
}

float QLNS::tinhLuong(){
    float TongLuong = 0;
    for(NhanSu *nhansu:dsNhanSu){
        TongLuong+=nhansu->tinhLuong();
    }
}