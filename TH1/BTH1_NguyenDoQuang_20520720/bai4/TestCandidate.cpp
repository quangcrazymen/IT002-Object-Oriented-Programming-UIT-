#include <iostream>
using namespace std;
void TestCandidate::Nhap()
{
    cout<<"Hãy nhập vào số sinh viên"<<endl;
    int nSv;
    cin>>nSv;
    cin.ignore();
    for(auto i = 0;i<nSv;i++){
        Candidate newCandidate;
        string ma, ten, date;
        float toan, van, anh;
        // Nhap
        cin.ignore();
        cout << "Hãy nhập vào mã SV:" << endl;
        getline(std::cin, ma);
        cout << "Hãy nhập vào tên SV:" << endl;
        getline(std::cin, ten);
        cout << "Hãy nhập vào sinh nhật SV:" << endl;
        getline(std::cin, date);
        cout<< "Lần lượt nhập vào điểm Toán, Văn, Anh của SV: "<<endl;
        cin>>toan>>van>>anh;
        newCandidate.setThongTinSV(ma,ten,date,toan,van,anh);
        this->listSV.push_back(newCandidate);
    }
}

void TestCandidate::Xuat(){
    // Sử dụng xuất method của từng object Candidate
    for(auto i =listSV.begin();i!=listSV.end();i++){
        i->Xuat();
    }
}

void TestCandidate::XuatLonHon15(){
    // Sử dụng xuất method của từng object Candidate
    for(auto i =listSV.begin();i!=listSV.end();i++){
        if(i->getDiemTong()>15)
            i->Xuat();
    }
}