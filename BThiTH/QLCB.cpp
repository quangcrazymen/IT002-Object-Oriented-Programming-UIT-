#include "QLCB.h"
#include<ostream>
using namespace std;

void QLCB::nhap(istream &is)
{
    int n;
    cout << "So Nhan su:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Cán bộ giảng dạy, cán bộ chuyên viên? {1, 2}:";
        int option;
        cin >> option;
        CanBo *tmp = NULL;
        switch (option)
        {
        case 1:
            tmp = new CanBoGiangVien();
            break;
        case 2:
            tmp = new CanBoChuyenVien();
            break;
        default:
            break;
        }
        cin.ignore();
        tmp->nhap(is);
        this->dsCanBo.push_back(tmp);
    }
}
void QLCB::xuat(ostream &os)
{
    for (CanBo *canbo : dsCanBo)
    {
        canbo->xuat(os);
    }
}

void QLCB::XuatHoanThanhXuatSac(){
    // Tra ve 2 la hoan thanh xuat sac
    for(CanBo *canbo : dsCanBo)
    {
        if(canbo->hoanThanhNhiemVu()==2){
            cout<<*canbo;
        }
    }
}

void QLCB::XuatLuongGiamDan()
{

}