#include "Professor.hpp"
#include "Staff.hpp"  
#include "Course.hpp" 

void Professor::assignCourse(Course* p_course) {
    _currentCourse = p_course;

}

void Professor::doClass() {
    if (_currentCourse) {
    } else {
    }
}

void Professor::closeCourse() {
    if (_currentCourse) {
        _currentCourse = NULL;
    } else {

    }
}

Professor* ProfessorList::courseHasProf() {
    for (std::vector<Professor*>::iterator it = professors.begin(); it != professors.end(); ++it) {
        Professor *prof = *it;
        if (!prof->getCurrentCourse()) {
            return prof;
        }
    }
    return 0;
}

Course* Professor::getCurrentCourse() {
    return _currentCourse;
}
