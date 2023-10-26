#include "Student.hpp"
#include <vector>
#include <string>

std::vector<Student*> StudentList::students;

void StudentList::addStudent(Student* student) {
    students.push_back(student);
}

void StudentList::removeStudent(int studentID) {
    for (std::vector<Student*>::iterator it = students.begin(); it != students.end(); ++it) {
        if ((*it)->studentID == studentID) {
            delete *it;
            *it = NULL;
            students.erase(it);
            break; 
        }
    }
}
