#include "LopHoc.h"
// LopHoc::LopHoc(/* args */)
// {

// }
int LopHoc::findStudent(string name){
    int index = 0;
    bool found = false;
    // Iterate through the vector
    for(auto &i:this->studentsList){
        if(i.getName()==name){
            found =true;
            break;
        }
        index++;
    }
    if(found){
        return index;
    }
    return -1;
}

//Thêm một học sinh mới vào trong danh sách học sinh
void LopHoc::addStudent(HocSinh &newStudent){
    this->studentsList.push_back(newStudent);
}


// //Xóa một học sinh đã có trong danh sách khỏi danh sách học sinh,
void LopHoc::deleteStudent(string name){
    int student = findStudent(name);
    if(student!=-1){
        this->studentsList.erase(studentsList.begin()+student);
    }
}
// //Xuất toàn bộ thông tin tất cả học sinh trong lớp học
void LopHoc::outputStudents(){
    for(auto &student:this->studentsList){
        student.output();
    }
}
//Xuất toàn bộ thông tin các học sinh trong lớp học có điểm trung bình > 8
void LopHoc::outputGoodStudents(){
    for(auto &student:this->studentsList){
        if(student.getAverageScore()>8){
            student.output();
        }
    }
}
// LopHoc::~LopHoc()
// {

// }