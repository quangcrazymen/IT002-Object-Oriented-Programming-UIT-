#include <iostream>
#include <cstdio>
#include <string.h>
#include<stdio.h>
using namespace std;
class String{
	char *p;
public:
	String (char const *s = "Alibaba") { p = strdup(s); }
	String (const String &s) { p = strdup(s.p); }
	~String () {delete [] p;}
	//...
};
class Diem {
	double x,y;
public:
	Diem (double xx, double yy) : x(xx),y(yy){};
	Diem () : x(0),y(0){};
};
int main(){
    int *pai = new int[10];
    Diem *pad = new Diem[5]; 
    //Ca 5 diem co cung toa do (0,0)
    String *pas = new String[5]; 
    delete [] pas;
delete [] pad;
delete [] pai;


}