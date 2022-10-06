#include "Triangle.h"
using namespace std;
// Default constructor
// Triangle::Triangle():a(),b(),c(){
//     cout<<"Create a triangle"<<endl;
// }

// Triangle::Triangle(){
//     Point a,b,c;
//     this->a=a;
//     this->b=b;
//     this->c=c;

// }

Triangle::Triangle(Point &a,Point &b,Point &c)
{   
    this->a=a;
    this->b=b;
    this->c=c;
}

void Triangle::display(){
    this->a.Xuat();
    this->b.Xuat();
    this->c.Xuat();

}

Triangle::~Triangle()
{
    cout<<"Triangle destructed!"<<endl;
}