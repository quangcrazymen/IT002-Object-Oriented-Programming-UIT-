#include <vector>
#include <fstream>
using namespace std;
class LopHoc
{
private:
    vector <HocSinh> studentsList;
public:
    // LopHoc(/* args */);
    //Thêm một học sinh mới vào trong danh sách học sinh
    void addStudent(HocSinh &newStudent);
    //Xóa một học sinh đã có trong danh sách khỏi danh sách học sinh,
    void deleteStudent(string name);
    //Xuất toàn bộ thông tin tất cả học sinh trong lớp học
    void outputStudents();
    //Xuất toàn bộ thông tin các học sinh trong lớp học có điểm trung bình > 8
    void outputGoodStudents();
    //
    
    ~LopHoc();
};


