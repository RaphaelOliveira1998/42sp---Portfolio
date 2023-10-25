#include <iostream>
#include <vector>
#include "Student.hpp"
#include "Staff.hpp"
#include "Course.hpp"
#include "Room.hpp"

int main() {

    Student studentList;
    Staff staffList;
    Course courseList;
    Room roomList;

    studentList.addStudent(Student("Alice", 1));
    studentList.addStudent(Student("Bob", 2));

    staffList.addStaffMember(Staff("John", 101));
    staffList.addStaffMember(Staff("Emily", 102));

    courseList.addCourse(Course("Math", 201));
    courseList.addCourse(Course("History", 202));

    roomList.addRoom(Room("Room 101", 301));
    roomList.addRoom(Room("Room 102", 302));

    // Removendo um aluno, membro da equipe, curso e sala
    studentList.removeStudent(2);
    staffList.removeStaffMember(101);
    courseList.removeCourse(201);
    roomList.removeRoom(302);

    // Exibindo o estado atual das listas
    std::cout << "Students:" << std::endl;
    for (const Student& student : studentList.students) {
        std::cout << "Student Name: " << student.name << ", ID: " << student.studentID << std::endl;
    }

    std::cout << "Staff Members:" << std::endl;
    for (const Staff& staff : staffList.staffMembers) {
        std::cout << "Staff Name: " << staff.name << ", ID: " << staff.staffID << std::endl;
    }

    std::cout << "Courses:" << std::endl;
    for (const Course& course : courseList.courses) {
        std::cout << "Course Name: " << course.name << ", ID: " << course.courseID << std::endl;
    }

    std::cout << "Rooms:" << std::endl;
    for (const Room& room : roomList.rooms) {
        std::cout << "Room Name: " << room.name << ", ID: " << room.roomID << std::endl;
    }


    return 0;
}