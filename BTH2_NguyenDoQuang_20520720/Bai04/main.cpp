#include "MangMotChieu.cpp"

int main()
{
    MangMotChieu ab;
    // Mảng random và xuất:
    ab.randomArray().xuat();
    string isAscending = (ab.isAscending()) ? " CÓ" : "KHÔNG";
    string hasOddNumber = ab.findSmallestOdd() != -1 ? to_string(ab.findSmallestOdd()) : "KHÔNG CÓ";
    // Tang dàn không?
    cout << "Mảng tăng " << isAscending << " dần" << endl;
    // Số lẻ bé nhất:
    cout << "Số lẻ bé nhất trong mảng là: " << hasOddNumber << endl;
    // Số nguyên tố lớn nhât:
    cout << "Số nguyên tố lớn nhât: " << ab.findLargestPrime() << endl;
    cout << "Nhập vào số bạn cần tìm trong mảng: ";
    // Số lần n xuất hiện trong mảng
    int n;
    cin >> n;
    cout << "Số lần số " << n << " xuất hiện trong mảng là: " << ab.outNumberOccurences(n) << endl;
    // Khởi tạo sử dụng constructor mặc định
    MangMotChieu c(vector<int>{2, 3, 5, 6});
    c.xuat();
    return 0;
}