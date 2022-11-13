#include<istream>
#include<ostream>
using namespace std;
class SoPhuc
{
private:
    float thuc;
    float ao;

public:
    // Hàm khỏi tạo
    SoPhuc();
    SoPhuc(float tu, float mau);

    // Hàm nhập xuất
    friend istream&operator>>(istream& is,SoPhuc &sp);
    friend ostream&operator<<(ostream& os,const SoPhuc &sp);
    void Nhap();
    void Xuat();
    SoPhuc operator+(SoPhuc &b);
    SoPhuc operator-(SoPhuc &b);
    SoPhuc operator*(SoPhuc &b);
    SoPhuc operator/(SoPhuc &b);
    bool operator==(const SoPhuc &other);
    bool operator!=(const SoPhuc &other);
};