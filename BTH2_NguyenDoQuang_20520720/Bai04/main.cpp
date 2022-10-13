#include "MangMotChieu.cpp"

int main(){
    MangMotChieu ab;
    //Mảng random và xuất:
    ab.randomArray(4).xuat();
    // Tang dàn không?
    string isAscending = (ab.isAscending())?" CÓ" : "KHÔNG";
    cout<<"Mảng tăng "<<isAscending<<" dần"<<endl;
    // Số lẻ bé nhất:
    cout<<"Số lẻ bé nhất trong mảng là: "<<ab.findSmallestOdd()<<endl;
    ab.xuat();
    // Số nguyên tố lớn nhât:
    cout<<"Số nguyên tố lớn nhât: "<<ab.findLargestPrime()<<endl;
    return 0;
}