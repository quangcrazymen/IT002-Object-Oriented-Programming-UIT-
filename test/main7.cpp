#include<string>
#include<iostream>
using namespace std;
int main(){
    string a ="Nguyen Do Quang";
    for(auto &i:a){
        cout<<i<<endl;
    }
    string test="0";
    if(test[0]>64&&test[0]<97)
    {

        cout<<"TRUE"<<endl;
    }
    else{
        cout<<"FALSE"<<endl;

    }
}