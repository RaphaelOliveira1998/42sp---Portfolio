#include <iostream>
#include <vector>
#include "Course.hpp"
#include "Professor.hpp"
#include "Student.hpp"
#include "Staff.hpp"
#include "Form.hpp"
#include "Headmaster.hpp"
#include "Classroom.hpp"


int main() {

    Staff staff;
    
    NeedMoreClassRoomForm needClassRoomForm;
    NeedCourseCreationForm needCourseCreationForm;
    SubscriptionToCourseForm subscriptionForm;

    needClassRoomForm.fillFormInfo();
    needCourseCreationForm.fillFormInfo();
    subscriptionForm.fillFormInfo();
       
    needClassRoomForm.execute();        
    needCourseCreationForm.execute();    
    subscriptionForm.execute();

    Staff* staffPtr = staff.getStaff();
    std::vector<Form*> forms = staff.getForms();

    Headmaster headmaster;
    Professor prof("Professor Jorge");
    Classroom classroom(1, 30);
    Course course("Matemática");
    Student student("Estudante Raphael");

    prof.createCourse();
    course.subscribe(&student);
    student.attendClass(&classroom);
    
    CourseFinishedForm courseFinishedForm;
    courseFinishedForm.fillFormInfo();
    headmaster.signAndExecuteForm(&courseFinishedForm);
    

    return 0;
}