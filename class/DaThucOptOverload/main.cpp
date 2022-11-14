#include "DaThuc.cpp"
int main()
{
    DaThuc a,b,c;
    cin>>a;
    cout<<a;
    cout << "Nhập vào giá trị của x:";
    float x;
    cin >> x;
    cout << "Giá trị của biểu thức khi biết x = " << x << " là: " << a.getPolinomialY(x) << endl;
    cin>>b;
    cout<<b;
    // b.outputPolinomial();
    cout << "Tổng của 2 đa thức là: ";
    c=a+b;
    cout<<c;
    cout << "Hiệu của 2 đa thức là: ";
    c=a-b;
    cout<<c;
}