#include <iostream>
#include <vector>
#include <string>
#include "Person.hpp"
#include "Student.hpp"
#include "Staff.hpp"
#include "Course.hpp"
#include "Room.hpp"

int main() {
    Student student1("Alice", 1);
    Staff secretaria("Maria", 000);
    Course course1("Física", 666);
    Room room1("Sala 01", 99);

    StudentList::addStudent(&student1);
    StaffList::addStaffMember(&secretaria);
    CourseList::addCourse(&course1);
    RoomList::addRoom(&room1);
    



    for (size_t i = 0; i < StudentList::students.size(); i++) {
        Student* student = StudentList::students[i];
        std::cout << "Name: " << student->name << ", studant ID: " << student->studentID << std::endl;
    }

    for (size_t i = 0; i < StaffList::staffs.size(); i++) {
        Staff* staff = StaffList::staffs[i];
        std::cout << "Name: " << staff->name << ", Staff ID: " << staff->staffID << std::endl;
    }

    for (size_t i = 0; i < CourseList::courses.size(); i++) {
        Course* course = CourseList::courses[i];
        std::cout << "Name: " << course->name << ", Course ID: " << course->courseID << std::endl;
    }

    for (size_t i = 0; i < RoomList::rooms.size(); i++) {
        Room* room = RoomList::rooms[i];
        std::cout << "Name: " << room->name << ", Room ID: " << room->roomID << std::endl;
    }

    StudentList::removeStudent(1);
    StaffList::removeStaffMember(000);
    CourseList::removeCourse(666);
    RoomList::removeRoom(99);

   

    return 0;
}