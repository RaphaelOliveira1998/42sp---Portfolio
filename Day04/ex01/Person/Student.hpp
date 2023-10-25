#ifndef student_hpp
#include <vector>

class Classroom;

class Student : public Person {
private:
    std::vector<Course*> _subscribedCourses;
    std::string name;

public:
    Student(const std::string& studentName) : name(studentName) {}

    void attendClass(Classroom* p_classroom) {
        bool isEnrolled = false;
        for (Course* course : _subscribedCourses) {
            if (course->isEnrolled(p_classroom)) {
                isEnrolled = true;
                break;
            }
        }

        if (isEnrolled) {
            p_classroom->addStudent(this);
        }
    }

    void exitClass(Classroom* p_classroom) {
        bool isEnrolled = false;
        for (Course* course : _subscribedCourses) {
            if (course->isEnrolled(p_classroom)) {
                isEnrolled = true;
                break;
            }
        }
        if (isEnrolled) {
            p_classroom->removeStudent(this);
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
        return nullptr;
    }
};
#endif