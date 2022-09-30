

#include "Point.cpp" 
#include "Triangle.cpp"
#include <iostream>
int main(){
    Point a(1,3);
    Point b(2,5);
    Point c(9,5);
    Triangle x(a,b,c);
    std::cout<<"Hello world";
    return 0;
}