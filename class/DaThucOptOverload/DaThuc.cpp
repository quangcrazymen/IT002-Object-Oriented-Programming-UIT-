#include "DaThuc.h"
using namespace std;
DaThuc::DaThuc():degree(0)
{

    this->listOfa = unique_ptr<float[]>(new float[1]);
    this->listOfa[0] = 0;
    // else{
    //     this->listOfa = unique_ptr<float[]>(new float[degree]);
    //     for(int i=0;i<this->degree;i++){
    //         this->listOfa[i]=0;
    //     }
    // }
}

// Nhập đa thức
void DaThuc::inputPolinomial(){
    cout<<"Hãy nhập và bậc của đa thức: ";
    int degree;
    cin>>degree;
    this->degree = degree;
    this->listOfa = unique_ptr<float[]>(new float[degree+1]);
    for(auto i=0;i<degree+1;i++){
        int a;
        cout<<"Hãy nhập và giá trị của a"<<i<<": ";
        cin>>a;
        listOfa[i]=a;
    }
}

istream& operator>>(istream &is, DaThuc &other){
    cout<<"Hãy nhập và bậc của đa thức: ";
    int degree;
    is>>degree;
    other.degree = degree+1;
    other.listOfa = unique_ptr<float[]>(new float[degree+1]);
    for(auto i=0;i<degree+1;i++){
        cout<<"Hãy nhập và giá trị của a"<<i<<": ";
        is>>other.listOfa[i];
    }
    return is;
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

ostream& operator<<(ostream &os,DaThuc &other){
    string polinomial;
    cout<<"Xuất ra đa thức: ";
    for(auto i =other.degree-1;i>=1;i--){
        polinomial+=to_string(other.listOfa[i])+"x^"+to_string(i)+" + ";
    }
    os<<polinomial+to_string(other.listOfa[0])<<endl;
    return os;
}
// Tính giá trị của đa thức khi biết giá trị của x
float DaThuc::getPolinomialY(float x){
    float result;
    for(auto i=0;i<=this->degree;i++){
        result+=this->listOfa[i]*pow(x,i);
    }
    return result;
}
// Cộng hai đa thức
DaThuc DaThuc::operator+(DaThuc& other){
    int numberOfLoop = this->degree<=other.degree?this->degree:other.degree;
    int resultDegree = this->degree>other.degree?this->degree:other.degree;
    DaThuc result;
    result.listOfa = unique_ptr<float[]>(new float[degree+1]);
    result.degree = resultDegree;
    for(auto i=0;i<=numberOfLoop;i++){
        result.listOfa[i]=this->listOfa[i]+other.listOfa[i];
    }
    for(auto i=numberOfLoop+1;i<=resultDegree;i++){
        if(this->degree>=other.degree)
            result.listOfa[i]=this->listOfa[i];
        else
            result.listOfa[i]=other.listOfa[i];
    }
    return result;
}
// Trừ hai đa thức
DaThuc DaThuc::operator-(DaThuc& other){
    int numberOfLoop = this->degree<=other.degree?this->degree:other.degree;
    int resultDegree = this->degree>other.degree?this->degree:other.degree;
    DaThuc result;
    result.listOfa = unique_ptr<float[]>(new float[degree+1]);
    result.degree = resultDegree;
    // create 2 temp array to hold value of a(s)
    unique_ptr <float[]>temp1 = unique_ptr<float[]>(new float[degree+1]);
    unique_ptr <float[]>temp2 = unique_ptr<float[]>(new float[degree+1]);
    // initialize result array with all zeroes
    for(auto i=0;i<=degree;i++){
        temp1[i]=temp2[i]=0;
    }
    for(auto i=0;i<=this->degree;i++){
        temp1[i]=this->listOfa[i];
    }
    for(auto i=0;i<=other.degree;i++){
        temp2[i]=this->listOfa[i];
    }
    for(auto i=0;i<=resultDegree;i++){
        result.listOfa[i]=this->listOfa[i]-other.listOfa[i];
    }
    return result;
}

// DaThuc::~DaThuc()
// {
// }
