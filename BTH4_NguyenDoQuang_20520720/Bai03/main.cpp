#include "MangSoNguyen.cpp"
using namespace std;

int main(){
    MangSoNguyen a,b,c;
    cin>>a;
    cout<<a;
    cin>>b;
    cout<<b;
    cout<<"Tổng của 2 mảng là: "<<endl;
    c=a+b;
    cout<<c;
    cout<<"Mảng sau khi -- là: "<<endl;
    cout<<c--;
    cout<<"Mảng sau khi ++ là: "<<endl;
    cout<<c++;
    return 0;
}