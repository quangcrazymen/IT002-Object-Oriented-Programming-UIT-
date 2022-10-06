#include "Point.cpp"
#include "Triangle.cpp"
#include<iostream>
using namespace std;
int main(){
    Point a(1,2);
    Point b(3,4);
    Point c(5,6);
    
    Triangle t(a,b,c);
    t.display();
    return 0;
}