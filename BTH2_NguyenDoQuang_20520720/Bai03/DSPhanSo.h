#include <iostream>

class DSPhanSo
{
private:
    PhanSo *list;
    // Số phần tử của list
    int size;

public:
    // DSPhanSo(/* args */);
    // setter and getter
    // Viết chương trình cho phép người dùng nhập vào danh sách các phân số
    void inputList();
    // Xuất danh sách phân số
    void outputList();
    // Tính tổng các phân số
    void sumOfFraction();
    // Tìm phân số lớn nhất
    void biggestFraction();
    // Tìm phân số nhỏ nhất
    void smallestFraction();
    // Sắp xếp danh sách phân số tăng dần
    void sortAscList();
    // Sắp xếp danh sách phân số giảm dần
    void sortDscList();
    ~DSPhanSo();
};
