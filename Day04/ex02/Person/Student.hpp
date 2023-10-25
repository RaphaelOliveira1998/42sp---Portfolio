#ifndef student_hpp
#include <vector>

class Classroom;

class Student : public Person {
private:
    std::vector<Course*> _subscribedCourses;
    std::string name;

public:
    Student(const std::string& studentName) : name(studentName) {}

    void Student::attendClass(Course* p_course) {
        bool isEnrolled = false;
        for (Course* course : _subscribedCourses) {
            if (course == p_course) {
                isEnrolled = true;
                break;
            }
        }
        if (isEnrolled) {
        } else {
        }
    }

    void Student::exitClass(Course* p_course) {
        bool isEnrolled = false;
        for (Course* course : _subscribedCourses) {
            if (course == p_course) {
                isEnrolled = true;
                break;
            }
        }
        if (isEnrolled) {
        } else {
        }
    }   

    void graduate(Course* p_course) {
        for (size_t i = 0; i < _subscribedCourses.size(); ++i) {
            if (_subscribedCourses[i] == p_course) {
                _subscribedCourses.erase(_subscribedCourses.begin() + i);
                break;
            }
        }
    }

    const std::vector<Course*>& getSubscribedCourses() const {
        return _subscribedCourses;
    }

    void addSubscribedCourse(Course* p_course) {
        _subscribedCourses.push_back(p_course);
    }

    Course* getCourseAtIndex(size_t index) {
        if (index < _subscribedCourses.size()) {
            return _subscribedCourses[index];
        }
        return NULL;
    }
};
#endif