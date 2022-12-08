#include "QLNV.h"
using namespace std;

void QLNV::nhap(istream &is){
    int n;
    cout<<"So Nhan su:";
    cin>>n;
    for(int i =0;i<n;i++){
        cout<<"Giảng viên nhập nghiên cứu viên, nhân viên văn phòng? {1, 2, 3}:";
        int option;cin>>option;
        NhanVien *tmp = NULL;
        switch (option)
        {
        case 1:
            tmp =new GiangVien();
            break;
        case 2:
            tmp =new NghienCuuVien();
            break;
        case 3: 
            tmp= new NhanVienVanPhong();
            break;
        default:
            break;
        }
        cin.ignore();
        tmp->nhap(is);
        this->dsNhanVien.push_back(tmp);
    }
}
void QLNV::xuat(ostream &os){
    for(NhanVien* nhanvien:dsNhanVien){
        nhanvien->xuat(os);
    }
    cout<<"Nhân viên đạt lao động tiên tiến: "<<endl;
    for(NhanVien *nhanvien:dsNhanVien){
        if(nhanvien->laoDongTienTien()){
            cout<<*nhanvien;
        }
    }
}