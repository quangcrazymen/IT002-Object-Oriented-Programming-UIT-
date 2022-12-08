#include "QLCB.h"
using namespace std;

void QLCB::nhap(istream &is)
{
    int n;
    cout << "So Nhan su:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Cán bộ nhà nước hay cán bộ hợp đồng? {1, 2}:";
        int option;
        cin >> option;
        CanBo *tmp = NULL;
        switch (option)
        {
        case 1:
            tmp = new CanBoNhaNuoc();
            break;
        case 2:
            tmp = new CanBoHopDong();
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
    for (CanBo *nhanvien : dsCanBo)
    {
        nhanvien->xuat(os);
    }
    cout << "Nhân viên đạt lao động tiên tiến: " << endl;
    for (CanBo *nhanvien : dsCanBo)
    {
        if (nhanvien->laoDongTienTien())
        {
            cout << *nhanvien;
        }
    }
}