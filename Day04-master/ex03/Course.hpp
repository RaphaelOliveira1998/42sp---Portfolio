#ifndef course_hpp
#define course_hpp
#include <vector>
#include <iostream>
#include <string>
#include "Singleton.hpp"
#include "Professor.hpp"

class Professor;

class Course {
public:
    std::string name;
    int courseID;
    Professor *_responsable;
    

    Course(std::string _name, int _courseID) : name(_name), courseID(_courseID) {}
};

class CourseList : public Singleton<CourseList> {
public:
    static std::vector<Course*> courses;
    static void addCourse(Course* course); 
    static void removeCourse(int courseID);
    Course* profHasCourse();

    friend class Singleton;
};
#endif

