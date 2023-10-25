#include "Form.hpp"

class SubscriptionToCourseForm : public Form {
private:
    std::string courseName;
    std::string studentName;

public:
    SubscriptionToCourseForm() : Form("Subscription to Course Form"), courseName(""), studentName("") {}

    void setCourseName(const std::string& name) {
        courseName = name;
    }

    void setStudentName(const std::string& name) {
        studentName = name;
    }

    void fillForm(const std::string& data) {
        
    }

    void execute() {
        
    }
};
