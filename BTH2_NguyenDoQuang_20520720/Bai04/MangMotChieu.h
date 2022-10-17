#include<vector>
#include<iostream>
#include<algorithm>
#include<iterator>
#include<string>
#include<math.h>
#include<random>
#include<cstdlib>

using namespace std;
class MangMotChieu
{
private:
    vector <int> mang; 
public:
    // Constructor
    MangMotChieu(vector <int> array = vector<int>{});
    //getter và setter
    vector <int> getArray();
    void setArray(vector<int>);
    // Tạo mảng ngẫu nhiên truyền vào số phần tử của mảng
    MangMotChieu randomArray(int);

    // Xuất mảng
    void xuat() const;

    // Đếm số lần xuất hiện x trong mảng
    int outNumberOccurences(int);
    // Kiểm tra dãy số nguyên có tăng dần hay không
    bool isAscending();
    // Tìm phần lẻ nhỏ nhất trong dãy số nguyên
    int findSmallestOdd() const;
    // Tìm số nguyên tố lớn nhất
    int findLargestPrime();
    // ~MangMotChieu();
};


