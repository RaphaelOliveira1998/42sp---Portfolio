#ifndef course_hpp
#include <vector>
#include <iostream>
#include <string>

class Professor;
class Student;

class Course {
private:
    std::string _name;
    Professor* _responsible;
    std::vector<Student*> _students;
    int _numberOfClassesToGraduate;
    std::vector<Student*>::size_type _maximumNumberOfStudents;

public:
    Course(std::string p_name);

    std::string getName() const {
        return _name;
    }

    Professor* getResponsible() const {
        return _responsible;
    }

    int getNumberOfClassesToGraduate() const {
        return _numberOfClassesToGraduate;
    }

    int getMaximumNumberOfStudents() const {
        return _maximumNumberOfStudents;
    }

    void assign(Professor* p_professor) {
        _responsible = p_professor;
    }

    void subscribe(Student* p_student) {
        if (_students.size() < _maximumNumberOfStudents) {
            _students.push_back(p_student);
        }
    }

    const std::vector<Student*>& getSubscribedStudents() const {
        return _students;
    }

    static std::vector<Course*> CourseList;

    void addStudent(Student* p_student) {
        if (_students.size() < _maximumNumberOfStudents) {
            _students.push_back(p_student);
        }
    }

    void removeStudent(Student* p_student) {
        for (std::vector<Student*>::iterator it = _students.begin(); it != _students.end(); ++it) {
            if (*it == p_student) {
                _students.erase(it);
                break;
            }
        }
    }

    bool isEnrolled(Student* p_student) {
        for (std::vector<Student*>::iterator it = _students.begin(); it != _students.end(); ++it) {
            if (*it == p_student) {
                return true;
            }
        }
        return false;
    }
};

Course::Course(std::string p_name)
    : _name(p_name), _responsible(NULL), _numberOfClassesToGraduate(0), _maximumNumberOfStudents(0) {
}

std::vector<Course*> Course::CourseList;
#endif