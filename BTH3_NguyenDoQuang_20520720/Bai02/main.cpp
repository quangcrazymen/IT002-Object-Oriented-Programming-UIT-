#include<iostream>
#include "HocSinh.cpp"
#include "LopHoc.cpp"
// #include<fstream>
using namespace std;

int main(){
    // fstream file;
    // file.open("LopHoc.txt",fstream::in);
    // string data;
    // while(getline(file,data)){
    //     cout<<data;
    // }
    
    // cout<<sizeof(file);
    // cout<<data;
    // file.close();
    HocSinh q;
    LopHoc a;
    a.addStudent(q);
    return 0;
}