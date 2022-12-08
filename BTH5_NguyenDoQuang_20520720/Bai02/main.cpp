#include <iostream>
#include<vector>
#include <string>
#include "DongVat.cpp"
#include "Bo.cpp"
#include "Cuu.cpp"
#include "De.cpp"

using namespace std;

int main(){
    DongVat *a;
    DongVat *b;
    DongVat *c;
    a = new Bo();
    b = new Cuu();
    c = new De();
    a->keu();
    a->luongSua();
    b->keu();
    b->luongSua();
    c->keu();
    c->luongSua();
}