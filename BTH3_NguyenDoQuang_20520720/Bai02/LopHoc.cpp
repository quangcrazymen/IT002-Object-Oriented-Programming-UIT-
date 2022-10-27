#include "LopHoc.h"
// LopHoc::LopHoc(/* args */)
// {

// }

//Thêm một học sinh mới vào trong danh sách học sinh
void LopHoc::addStudent(HocSinh newStudent){
    this->studentsList.push_back(newStudent);
}


// //Xóa một học sinh đã có trong danh sách khỏi danh sách học sinh,
// void LopHoc::deleteStudent(string name){
//     if(find(studentList.begin(),studentList.end(),name);
// }
// //Xuất toàn bộ thông tin tất cả học sinh trong lớp học
// void LopHoc::outputStudents(){
//     for(auto &student:this->studentsList){
//         student->output();
//     }
// }
//Xuất toàn bộ thông tin các học sinh trong lớp học có điểm trung bình > 8
// void LopHoc::outputGoodStudents(){
//     for(auto &student:this->studentsList){
//         (student->getAverageScore()>8){
            
//         }
//     }
// }
// LopHoc::~LopHoc()
// {

// }