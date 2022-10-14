#include "MangMotChieu.cpp"

int main(){
    MangMotChieu ab;
    //Mảng random và xuất:
    ab.randomArray(3).xuat();
    // Tang dàn không?
    string isAscending = (ab.isAscending())?" CÓ" : "KHÔNG";
    string hasOddNumber = ab.findSmallestOdd()!=-1? to_string(ab.findSmallestOdd()): "KHÔNG CÓ";
    cout<<"Mảng tăng "<<isAscending<<" dần"<<endl;
    // Số lẻ bé nhất:
    cout<<"Số lẻ bé nhất trong mảng là: "<<hasOddNumber<<endl;
    // Số nguyên tố lớn nhât:
    cout<<"Số nguyên tố lớn nhât: "<<ab.findLargestPrime()<<endl;
    return 0;
}