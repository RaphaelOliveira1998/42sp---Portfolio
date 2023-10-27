#ifndef student_hpp
#include <vector>
#include <iostream>
class Person;

class Student {
public:
    std::string name;
    int studentID;

    Student(std::string _name, int _studentID) : name(_name), studentID(_studentID) {}
};

class StudentList {
public:
    static std::vector<Student*> students;
    static void addStudent(Student* student);
    static void removeStudent(int studentID);
};
#endif