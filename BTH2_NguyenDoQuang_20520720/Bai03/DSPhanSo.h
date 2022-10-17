#include <iostream>
#include <memory>
#include<limits>
#include<algorithm>
class DSPhanSo
{
private:
    PhanSo *list;
    // Số phần tử của list
    int size;

public:
    // Use default constructor
    // setter and getter
    // Viết chương trình cho phép người dùng nhập vào danh sách các phân số
    void inputList();
    // Xuất danh sách phân số
    void outputList();
    // Tính tổng các phân số
    PhanSo sumOfFraction();
    // Tìm phân số lớn nhất
    PhanSo* biggestFraction();
    // Tìm phân số nhỏ nhất
    PhanSo* smallestFraction();
    // Sắp xếp danh sách phân số tăng dần
    void sortAscList();
    // Sắp xếp danh sách phân số giảm dần
    void sortDscList();

    ~DSPhanSo();
};
