#include "QLNV.h"

using namespace std;

void QLNV::nhap(){
    int n;
    cout<<"So Nhan su:";
    cin>>n;
    for(int i =0;i<n;i++){
        cout<<"Nhân viên quản lí, văn phòng, sản xuất? {1, 2, 3}:";
        int option;cin>>option;
        NhanVien *tmp;
        switch (option)
        {
        case 1:
            tmp =new NVQuanly();
            break;
        case 2:
            tmp =new NVVanPhong();
            break;
        case 3: 
            tmp= new NVSanXuat();
        default:
            break;
        }
        // Thêm nhân viên vào danh sách 
        tmp->nhap();
        this->dsNhanVien.push_back(tmp);
}



void QLNV::xuat(){
    for(NhanVien* nhansu:dsNhanVien){
        nhansu->Xuat();
    }
}
// Tính tổng lương
long QLNV::tinhLuong(){
    float TongLuong = 0;
    for(NhanVien *nhanvien:dsNhanVien){
        TongLuong+=nhanvien->tinhLuong();
    }
}

// 5 Tìm kiếm nhân viên
NhanVien QLNV::searchForEmployer(string name){
    // set flag
    bool found=false;
    for(NhanVien *nhanvien:dsNhanVien){
        if(nhanvien->name==name){
            nhanvien->xuat();
            found =true;
        }
    }
    if(!found)
        cout<<"Nhân viên không tồn tại";
}