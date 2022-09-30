#include "PhanSo.cpp"
// BLT01_MSSV_HOVATEN

int main(){
    // init PhanSo có tử số bằng 2
    PhanSo a(2);
    a.Nhap();
    a.Xuat();
    // init Phân số có tử là 1 và mẫu là 4
    PhanSo b(1,4);
    b.Xuat();
    // mảng 2 phân số cần cộng
    PhanSo elements[2] = {a,b};

    // PhanSo c để cộng lưu kết quả cộng của 2 phân số a và b
    PhanSo c(1,3);
    std::cout<<"Tổng:"<<std::endl;
    c = c.Cong(elements);
    c.Xuat();

    return 0;
}