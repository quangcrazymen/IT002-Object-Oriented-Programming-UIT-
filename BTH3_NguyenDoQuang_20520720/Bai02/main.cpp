#include<iostream>
#include "LopHoc.h"
#include "HocSinh.h"
// #include<fstream>
using namespace std;

int main(){
    fstream file;
    file.open("LopHoc.txt",fstream::in);
    string data;
    while(getline(file,data)){
        cout<<data;
    }
    
    cout<<sizeof(file);
    cout<<data;
    file.close();
    return 0;
}