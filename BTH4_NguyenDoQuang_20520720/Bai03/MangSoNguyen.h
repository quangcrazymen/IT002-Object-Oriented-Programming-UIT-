#include<istream>
#include<ostream>
#include<iostream>
using namespace std;

class MangSoNguyen
{
private:
    int *dulieu;
    int kichthuoc;
public:
    // Input and output
    friend istream& operator>> (istream &is,MangSoNguyen &sn);
    friend ostream& operator<< (ostream &os,MangSoNguyen &sn);

    MangSoNguyen& operator=(const MangSoNguyen&);
    // MangSoNguyen& operator=(const MangSoNguyen&sn);
    MangSoNguyen operator+(const MangSoNguyen&sn);
    // MangSoNguyen operator++();
    
    MangSoNguyen& operator++(int x);
    MangSoNguyen& operator--(int x);

    MangSoNguyen(/* args */);
    ~MangSoNguyen();
};
