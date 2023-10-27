#include "Headmaster.hpp"
#include "Form.hpp"
#include "Professor.hpp"
#include "Course.hpp"

void assignCourse(Professor* professor, Course* course) {
    CourseList& courseList = CourseList::getInstance();
    ProfessorList& professorList = ProfessorList::getInstance();
    Course* course = courseList.profHasCourse();
}

void Headmaster::signForm(Form* form) {
    if (!form->isFormSigned()) {
        form->sign();
    }
}

void Headmaster::executeForm(Form* form) {
    if (form->isFormSigned() && !form->isFormExecuted()) {
        form->execute();
    }
}

