#include "DaThuc.cpp"
int main()
{
    DaThuc a;
    a.inputPolinomial();
    a.outputPolinomial();
    cout << "Nhập vào giá trị của x:";
    float x;
    cin >> x;
    cout << "Giá trị của biểu thức khi biết x = " << x << " là: " << a.getPolinomialY(x) << endl;
    DaThuc b;
    b.inputPolinomial();
    b.outputPolinomial();
    cout << "Tổng của 2 đa thức là: ";
    a.plus(b).outputPolinomial();
    cout << "Hiệu của 2 đa thức là: ";
    a.minus(b).outputPolinomial();
    // Biểu thức mặc định
    cout << "Đa thức mặc định: ";
    DaThuc c;
    c.outputPolinomial();
    return 0;
}