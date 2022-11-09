#include<iostream>
class SoPhuc
{
private:
    int thuc;
    int ao;
public:
    SoPhuc(int,int);
    SoPhuc operator+(SoPhuc &other);
    SoPhuc operator-();
    SoPhuc operator=(SoPhuc&other);
    void display();
};