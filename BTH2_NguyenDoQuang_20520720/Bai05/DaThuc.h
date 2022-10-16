#include <memory>
#include <iostream>
#include<string>
class DaThuc
{
private:
    // Bậc của đa thức:
    // Using smart pointer
    std::unique_ptr <float[]> listOfa;
    int degree;
public:
    // Phương thức khởi tạo một đa thức có bậc bằng 0.
    // DaThuc(/* args */);
    
    // Nhập đa thức
    void inputPolinomial();
    // Xuất đa thức
    void outputPolinomial();
    // Tính giá trị của đa thức khi biết giá trị của x
    // Cộng hai đa thức
    // Trừ hai đa thức

    // ~DaThuc();
};
