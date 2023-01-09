#include <iostream>
#include <vector>
#include <string>
#include <ostream>
#include <istream>
#include "CanBo.cpp"
#include "CanBoChuyenVien.cpp"
#include "CanBoGiangVien.cpp"
#include "QLCB.cpp"

using namespace std;

int main()
{
    QLCB a; // class Quản lý cán bộ
    // Nhập vào danh sách các cán bộ (Câu 2)
    cin >> a;
    // In ra danh sách các tất cả các chuyên viên (Câu 3)
    cout << a;
    // Xuất ra tất cả các cán bộ có xếp loại hoàn thành xuất sắc nhiệm vụ (Câu 4)
    a.XuatHoanThanhXuatSac();
    // Xuất danh sách các chuyên viên trong trường đại học theo thứ tự lương giảm dần (Câu 5)
    a.XuatLuongGiamDan();
    return 0;
}