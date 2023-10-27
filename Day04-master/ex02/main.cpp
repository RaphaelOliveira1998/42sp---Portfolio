#include <iostream>
#include <vector>
#include <string>
#include "Person.hpp"
#include "Student.hpp"
#include "Staff.hpp"
#include "Course.hpp"
#include "Room.hpp"
#include "Secretary.hpp"
#include "Headmaster.hpp"
#include "Form.hpp"
#include "Singleton.hpp"

int main() {

    Secretary secretary;
    Headmaster headmaster;

    StudentList& studentList = StudentList::getInstance();
    StaffList& staffList = StaffList::getInstance();
    CourseList& courseList = CourseList::getInstance();
    RoomList& roomList = RoomList::getInstance();

    Student student("Alice", 1);
    Staff faxineira("Maria", 000);
    Course course("Física", 666);
    Room room("Sala 01", 99);

    studentList.addStudent(&student);
    staffList.addStaffMember(&faxineira);
    courseList.addCourse(&course);
    roomList.addRoom(&room);

    for (size_t i = 0; i < studentList.students.size(); i++) {
        Student* student = studentList.students[i];
        std::cout << "Name: " << student->name << ", student ID: " << student->studentID << std::endl;
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

    studentList.removeStudent(1);
    staffList.removeStaffMember(000);
    courseList.removeCourse(666);
    roomList.removeRoom(99);

    Form* courseFinishedForm = secretary.createForm(CourseFinished);
    std::string studentName = "Maria";
    Form* NeedMoreClassRoomForm = secretary.createForm(NeedMoreClassRoom);
    std::string studentName1 = "Eduarda";

    secretary.fillForm(courseFinishedForm, studentName);
    secretary.fillForm(NeedMoreClassRoomForm, studentName1);

    secretary.submitForm(headmaster, courseFinishedForm);
    secretary.submitForm(headmaster, NeedMoreClassRoomForm);

    headmaster.signForm(courseFinishedForm);
    headmaster.signForm(NeedMoreClassRoomForm);

    headmaster.executeForm(courseFinishedForm);
    headmaster.executeForm(NeedMoreClassRoomForm);

    if (courseFinishedForm->isFormSigned() && courseFinishedForm->isFormExecuted()) {
        std::cout << "O formulário de matemática solicitado por " << studentName << " foi assinado e executado com sucesso!" << std::endl;
    } else {
        std::cout << "O formulário não foi completamente processado." << std::endl;
    }

    if (NeedMoreClassRoomForm->isFormSigned() && NeedMoreClassRoomForm->isFormExecuted()) {
        std::cout << "O formulário de física solicitado por " << studentName1 << " foi assinado e executado com sucesso!" << std::endl;
    } else {
        std::cout << "O formulário 2 não foi completamente processado." << std::endl;
    }

    delete courseFinishedForm;
    delete NeedMoreClassRoomForm;

    return 0;
}