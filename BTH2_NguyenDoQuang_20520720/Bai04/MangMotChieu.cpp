#include "MangMotChieu.h"
using namespace std;
// MangMotChieu::MangMotChieu(/* args */)
// {
// }

void MangMotChieu::setArray(vector<int> a)
{
    this->mang = a;
}

MangMotChieu MangMotChieu::randomArray(int)
{
    MangMotChieu temp;
    this->setArray(vector<int>{5,2,47,1, 3, 5,2,1});
    temp.setArray(vector<int>{1, 3, 5,2,1});
    return temp;
}

void MangMotChieu::xuat() const
{
    for(auto i=this->mang.begin();i!=mang.end();i++){
        cout << *i<<endl;
    }
}

// Đếm số lần xuất hiện x trong mảng
int MangMotChieu::outNumberOccurences(int num)
{
    int count=0;
    for(auto i=this->mang.begin();i!=mang.end();i++){
        if(*i==num)
            count+=1;
    }
    return count;
}
// Kiểm tra dãy số nguyên có tăng dần hay không
bool MangMotChieu::isAscending()
{
    for(auto i=this->mang.begin();i!=mang.end();++i){
        if(*i>*next(i,1))
            return false;
    }
    return true;
}
// Tìm phần lẻ nhỏ nhất trong dãy số nguyên
int MangMotChieu::findSmallestOdd() const
{
    // Copy to temp array first
    vector <int> temp=this->mang;
    sort(temp.begin(),temp.end());
    for(auto i=temp.begin();i!=temp.end();++i){
        if(*i%2!=0)
            return *i;
    }
    return -1;
}
// Số nguyên tố hay không:
static bool isPrime(int n){
    for(auto i=2;i<sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}

// Tìm số nguyên tố lớn nhất
int MangMotChieu::findLargestPrime()
{
    // Copy to temp array first
    vector <int> temp=this->mang;
    sort(temp.begin(),temp.end());
    for(auto i=temp.rbegin();i!=temp.rend();++i){
        if(isPrime(*i))
            return *i;
    }
    return -1;
}

// MangMotChieu::~MangMotChieu()
// {
// }