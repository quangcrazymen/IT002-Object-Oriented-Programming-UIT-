#include "PhanSo.cpp"
#include "DSPhanSo.cpp"

using namespace std;
int main(){
    DSPhanSo a;
    a.inputList();
    a.outputList();
    int *pt =new int[4];
    for(auto i=0;i<4;i++){
        pt[i]=i;
    }
      for(auto i=0;i<6;i++){
        cout<<pt[i];
    }
    cout<<"\n"<<sizeof(a)<<endl;
    return 0;
}