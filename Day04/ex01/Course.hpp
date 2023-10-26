#ifndef course_hpp
#include <vector>
#include <iostream>
#include <string>
#include "Singleton.hpp"

class Course {
public:
    std::string name;
    int courseID;

    Course(std::string _name, int _courseID) : name(_name), courseID(_courseID) {}
};

class CourseList : public Singleton<CourseList> {
public:
    static std::vector<Course*> courses;
    static void addCourse(Course* course); 
    static void removeCourse(int courseID);

    friend class Singleton;
};
#endif

