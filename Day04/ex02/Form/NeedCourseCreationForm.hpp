#include "Form.hpp"

class NeedCourseCreationForm : public Form {
private:
    std::string courseName;
    int requiredStudents;

public:
    NeedCourseCreationForm() : Form("Need Course Creation Form"), courseName(""), requiredStudents(0) {}

    void setCourseName(const std::string& name) {
        courseName = name;
    }

    void setRequiredStudents(int count) {
        requiredStudents = count;
    }

    void fillForm(const std::string& data) {
    }

    void execute() {
        
    }
};
