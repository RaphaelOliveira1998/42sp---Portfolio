#include "Student.hpp"
#include <vector>
#include <string>

std::vector<Student*> StudentList::students;

void StudentList::addStudent(Student *student) {
    students.push_back(student);
}

void StudentList::removeStudent(int studentID) {
    for (std::vector<Student*>::iterator it = students.begin(); it != students.end(); ) {
        if ((*it)->studentID == studentID) {
            it = students.erase(it); 
        } else {
            ++it;
        }
    }
}
