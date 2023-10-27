#ifndef course_hpp
#include <vector>
#include <iostream>
#include <string>

class Course {
public:
    std::string name;
    int courseID;

    Course(std::string _name, int _courseID) : name(_name), courseID(_courseID) {}
};

class CourseList {
public:
    static std::vector<Course*> courses;
    static void addCourse(Course* course); 
    static void removeCourse(int courseID);
};
#endif

