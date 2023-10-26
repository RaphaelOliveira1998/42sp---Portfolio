#include "Course.hpp"
#include <vector>
#include <string>

std::vector<Course*> CourseList::courses;

void CourseList::addCourse(Course* course) {
    courses.push_back(course);
}

void CourseList::removeCourse(int courseID) {
    for (std::vector<Course*>::iterator it = courses.begin(); it != courses.end(); ++it) {
        if ((*it)->courseID == courseID) {
            delete *it;
            courses.erase(it);
            break; 
        }
    }
}