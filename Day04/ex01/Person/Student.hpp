#ifndef student_hpp
#include <vector>
#include <iostream>
#include "Singleton.hpp"

class Student {
public:
    std::string name;
    int studentID;

    Student(std::string _name, int _studentID) : name(_name), studentID(_studentID) {}
};

class StudentList : public Singleton<StudentList> {
public:
    static std::vector<Student*> students;
    static void addStudent(Student* student);
    static void removeStudent(int studentID);

    friend class Singleton;
};
#endif