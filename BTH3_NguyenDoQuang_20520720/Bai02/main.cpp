#include<iostream>
#include "HocSinh.cpp"
#include "LopHoc.cpp"
// #include<fstream>
using namespace std;

int main(){
    // fstream file;
    // file.open("LopHoc.txt",fstream::in);
    // string data;
    // while(getline(file,data)){
    //     cout<<data;
    // }
    
    // cout<<sizeof(file);
    // cout<<data;
    // file.close();
    HocSinh stu1("Nguyen Do Quang","20520720","4567892135",10.0);
    HocSinh stu2("Do Thi Hoa","20520528","4554892135",5.0);
    HocSinh stu3("Tran Van Minh","19564658","4554892455",7.0);
    HocSinh stu4("Nguyen Do Quang","19520720","4567892135",10.0);

    LopHoc a;
    a.addStudent(stu1);
    a.addStudent(stu2);
    a.addStudent(stu3);
    a.addStudent(stu4);
    // delete student in the class
    a.deleteStudent("Do Thi Hoa");
    // delete student not exist in class
    a.deleteStudent("Nong Van Den");
    a.outputStudents();
    cout<<"Sinh viên có điểm trung bình lớn hơn 8: "<<endl;
    a.outputGoodStudents();

    LopHoc b;
    HocSinh stu5;
    stu5.input();
    stu5.output();
    return 0;
}