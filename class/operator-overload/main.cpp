#include <iostream>
#include "SoPhuc.cpp"
using namespace std;
int main(){
    SoPhuc a(2,5);
    SoPhuc b(-3,4);
    (a+b).display();
    SoPhuc c(3);
    (-c).display();
    c=a;
    c.display();
}