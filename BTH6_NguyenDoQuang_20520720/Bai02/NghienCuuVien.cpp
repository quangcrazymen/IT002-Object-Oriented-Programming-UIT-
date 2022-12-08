#include "NghienCuuVien.h"
using namespace std;

void NghienCuuVien::nhap(istream &is)
{
    NhanVien::nhap(is);
    cout << "Nhap vao so de tai nghiên cứu: ";
    is >> this->soDeTaiNghienCuu;
    cout << "Nhap vao so bai bao khoa học: ";
    is >> this->soBaiBao;
}

void NghienCuuVien::xuat(ostream &os)
{
    NhanVien::xuat(os);
    os << "Số năm kinh nghiệm: " << this->soDeTaiNghienCuu << endl;
    os << "So bai bao khoa hoc:" << this->soBaiBao << endl;
}

bool NghienCuuVien::laoDongTienTien()
{
    if (this->soDeTaiNghienCuu >= 1 & this->soBaiBao >= 2)
    {
        return true;
    }
    return false;
}
