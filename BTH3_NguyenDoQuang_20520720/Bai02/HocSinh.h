#include<string>
#include<iostream>
#include<regex>
class HocSinh
{
private:
    // Tên hợc sinh
    std::string name;
    // Mã sinh viên
    std::string id;
    // Số điện thoại
    std::string phoneNum;
    // Điểm trung bình
    float averageScore;
public:
    HocSinh(/* args */);
    ~HocSinh();
    void output();
    void input();
};

HocSinh::HocSinh(/* args */)
{

}

HocSinh::~HocSinh()
{

}
