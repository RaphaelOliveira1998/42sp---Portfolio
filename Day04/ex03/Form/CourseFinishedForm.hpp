#ifndef coursefinishedform_hpp

class CourseFinishedForm : public Form {
private:
    std::string courseName;
    int completionYear;

public:
    CourseFinishedForm() : Form("Course Finished Form"), courseName(""), completionYear(0) {}

    void setCourseName(const std::string& name) {
        courseName = name;
    }

    void setCompletionYear(int year) {
        completionYear = year;
    }

    void fillForm(const std::string& data) {
        
    }

    void execute() {
    }
};
#endif