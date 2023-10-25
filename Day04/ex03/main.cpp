#include <iostream>
#include <vector>
#include "Course.hpp"
#include "Professor.hpp"
#include "Student.hpp"
#include "Staff.hpp"
#include "Form.hpp"
#include "Headmaster.hpp"
#include "Classroom.hpp"

int main() {

    Staff staff;
    
    Staff* staffPtr = staff.getStaff();
    std::vector<Form*> forms = staff.getForms();

    Headmaster headmaster;
    Secretary secretary;
    Professor prof("Professor Jorge");
    Student student("Estudante Raphael");

    prof.createCourse(secretary.getStaff(), "Mathematics 101");

    

    Form* form = secretary.createForm(FormType::CourseFinished);
    secretary.fillForm(form, "Matematica 101 completa.");

    headmaster.receiveForm(form);

    headmaster.approveForms();



    return 0;
}