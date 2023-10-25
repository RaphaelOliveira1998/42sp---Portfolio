#ifndef student_hpp
#include <vector>
#include <iostream>
#include <algorithm> 

class Student : public Person {
public:
    std::string name;
    int studentID;
    std::vector<Student> students;

    Student(std::string _name, int _studentID) : name(_name), studentID(_studentID) {}

    void addStudent(const Student& student) {
        students.push_back(student);
    }
    
    void removeStudent(int studentID) {
        students.erase(std::remove_if(students.begin(), students.end(), [studentID](const Student& s) {
            return s.studentID == studentID;
        }), students.end());
    }
};
#endif