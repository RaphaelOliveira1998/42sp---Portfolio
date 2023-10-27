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
#include "Professor.hpp"

int main() {

    Secretary secretary;
    Headmaster headmaster;

    ProfessorList& professorList = ProfessorList::getInstance();
    StudentList& studentList = StudentList::getInstance();
    StaffList& staffList = StaffList::getInstance();
    CourseList& courseList = CourseList::getInstance();
    RoomList& roomList = RoomList::getInstance();

    Professor professor1("Vinicius", 7);
    Student student("Alice", 1);
    Staff faxineira("Maria", 000);
    Course course1("Física", 666);
    Room room("Sala 01", 99);

    professorList.addProfessor(&professor1);
    studentList.addStudent(&student);
    staffList.addStaffMember(&faxineira);
    courseList.addCourse(&course1);
    roomList.addRoom(&room);

    Professor* professor = professorList.courseHasProf();
    Course* course = courseList.profHasCourse();

    std::cout << "Professor e curso atrelados: " << professor << ", " << course << std::endl;

    headmaster.assignCourse(professor, course);

    

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