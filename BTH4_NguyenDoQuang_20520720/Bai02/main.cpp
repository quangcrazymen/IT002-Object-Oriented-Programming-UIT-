#include "SoPhuc.cpp" 
using namespace std;
int main(){
    SoPhuc a;
    cin>>a;
    cout<<a;
    SoPhuc b(2,4);
    cout<<b;
    cout<<"Tổng của 2 số phức là: ";
    cout<<(a+b);
    cout<<"Hiệu của 2 số phức là: ";
    cout<<(a-b);
    cout<<"Tích của 2 số phức là: ";
    cout<<(a*b);
    cout<<"Thương của 2 số phức là: ";
    cout<<(a/b);
    if(a==b){
        cout<<"Hai số phức bằng nhau\n";
    }
    if(a!=b){
        cout<<"Hai số phức khác nhau\n";
    }
    return 0;
}