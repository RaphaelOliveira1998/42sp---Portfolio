#ifndef course_hpp
#include <vector>
#include <iostream>
#include <string>
#include <algorithm> 

class Professor;
class Student;

class Course {
public:
    std::string name;
    int courseID;
    std::vector<Course> courses;

    Course(std::string _name, int _courseID) : name(_name), courseID(_courseID) {}
    
    void addCourse(const Course& course) {
        courses.push_back(course);
    }

    void removeCourse(int courseID) {
        courses.erase(std::remove_if(courses.begin(), courses.end(), [courseID](const Course& c) {
            return c.courseID == courseID;
        }), courses.end());
    }
};
#endif

