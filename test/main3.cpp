#include <iostream>
#include <cstdio>
#include <string.h>
#include<stdio.h>
using namespace std;
class String{
	char *p;
public:
    static void Hello(){ cout<<"Heloo"<<endl;}
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
class TOM{
private:
	int SecretTom;		//Bí mật của TOM
public:
	friend class JERRY; 	//Có lớp bạn là JERRY

    int getSecret(){
        return this->SecretTom;
    }
};
class JERRY{
public:
	void Change(TOM &T){
		T.SecretTom+=2; 	//Bạn nên có thể thay thế
	}
};

class COUNTERCLASS{
	int Counter; //(default private)
public:
    COUNTERCLASS(int x=3){
        this->Counter=x;
    }
	char CounterChar;
	void Init( char );
	void AddOne( ){
		Counter++;
	}
	friend int Total (int);
};

COUNTERCLASS MyCounter[26]{COUNTERCLASS(4),COUNTERCLASS(6),COUNTERCLASS(10)};

int Total(int NumberObjects)
{
    int sum=0;
	for (int i=0; i<NumberObjects; i++)
		sum += MyCounter[i].Counter;
		//Tính tổng số ký tự trong số các Objects ký tự
	return sum;
}


int main(){
    TOM a;
    cout<<a.getSecret()<<endl;
    JERRY b;
    b.Change(a);
    b.Change(a);
    cout<<a.getSecret()<<endl;
    cout<<Total(2);
    String::Hello();
}