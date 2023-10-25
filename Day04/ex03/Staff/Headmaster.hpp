// Headmaster.hpp
#ifndef HEADMASTER_HPP

#include "Form.hpp"
#include "Secretary.hpp"
#include "Course.hpp"
#include "Professor.hpp"
#include "Student.hpp"
#include <vector>

class Headmaster : public Staff {
private:
    std::vector<Form*> pendingForms;

public:
    Headmaster() : pendingForms() {}

    void receiveForm(Form* form) {
        
        pendingForms.push_back(form);
    }

    void approveForms() {
        
        for (Form* form : pendingForms) {
            form->execute();
        }
        
        pendingForms.clear();
    }

    void createCourse(Professor* professor, const std::string& courseName) {
        Course* course = new Course(courseName);
        course->assign(professor);
    }

    // void enrollStudent(Student* student, Course* course) {
        
    //     course->subscribe(student);
    // }
};
#endif
