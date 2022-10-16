#include "DaThuc.h"
using namespace std;
// DaThuc::DaThuc(/* args */)
// {
    
// }

// Nhập đa thức
void DaThuc::inputPolinomial(){
    cout<<"Hãy nhập và bậc của đa thức: ";
    int degree;
    cin>>degree;
    this->degree = degree;
    this->listOfa = unique_ptr<float[]>(new float[degree]);
    for(auto i=0;i<degree+1;i++){
        int a;
        cout<<"Hãy nhập và giá trị của a"<<i<<": ";
        cin>>a;
        listOfa[i]=a;
    }
}
// Xuất đa thức
void DaThuc::outputPolinomial(){
    string polinomial;
    cout<<"Xuất ra đa thức: ";
    for(auto i =this->degree;i>=1;i--){
        polinomial+=to_string(this->listOfa[i])+"x^"+to_string(i)+" + ";
    }
    cout<<polinomial+to_string(this->listOfa[0])<<endl;
}

// DaThuc::~DaThuc()
// {
// }
