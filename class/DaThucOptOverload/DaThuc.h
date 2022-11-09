#include <memory>
#include <iostream>
#include<string>
#include<math.h>
#include<ostream>
#include<istream>

class DaThuc
{
private:
    // Bậc của đa thức:
    // Using smart pointer
    std::unique_ptr <float[]> listOfa;
    int degree;
public:
    // Phương thức khởi tạo một đa thức có bậc bằng 0, và đa thức bậc n
    DaThuc();
    // Nhập đa thức
    void inputPolinomial();
    friend std::istream& operator>>(std::istream& is, DaThuc& other);

    // Xuất đa thức
    void outputPolinomial();
    friend std::ostream& operator<<(std::ostream& os,DaThuc &other);
    
    // Tính giá trị của đa thức khi biết giá trị của x
    float getPolinomialY(float);
    // Cộng hai đa thức
    DaThuc operator+(DaThuc&);
    // Trừ hai đa thức
    DaThuc operator-(DaThuc&);
    // ~DaThuc();
};
