// Professor.hpp
#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <string>
#include <vector>
#include "Staff.hpp"


class Professor : public Staff {
private:
    std::string name;
    std::vector<Course*> courses;

public:
    Professor(const std::string& profName) : name(profName), courses() {}

    const std::string& getName() const {
        return name;
    }

    const std::vector<Course*>& getCourses() const {
        return courses;
    }

    void createCourse(Staff* staff, const std::string& courseName);
};

#endif
