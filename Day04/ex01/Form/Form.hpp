#include <iostream>
#include <string>
#ifndef form_hpp


enum class FormType {
	CourseFinished,
	NeedMoreClassRoom,
	NeedCourseCreation,
	SubscriptionToCourse
};

class Form {
public:
	Form(FormType type) : formType(type), isSigned(false) {}

    virtual void fillFormInfo() = 0;

    virtual void execute() = 0;

    void sign() {
        isSigned = true;
    }

    bool isFormSigned() {
        return isSigned;
    }

protected:
    FormType formType;
    bool isSigned;
};

class CourseFinishedForm : public Form {
public:
    CourseFinishedForm() : Form(FormType::CourseFinished) {}

    void fillFormInfo() {
        std::cout << "CourseFinishedForm: Fill with course completion details." << std::endl;
    }

    void execute() {
        if (isSigned) {
            std::cout << "Course finished action executed." << std::endl;
        } else {
            std::cout << "Course finished action cannot be executed as it's not signed." << std::endl;
        }
    }
};

class NeedMoreClassRoomForm : public Form {
public:
    NeedMoreClassRoomForm() : Form(FormType::NeedMoreClassRoom) {}

    void fillFormInfo() {
        std::cout << "NeedMoreClassRoomForm: Fill with classroom details." << std::endl;
    }

    void execute() {
        if (isSigned) {
            std::cout << "Need for more classroom action executed." << std::endl;
        } else {
            std::cout << "Need for more classroom action cannot be executed as it's not signed." << std::endl;
        }
    }
};

class NeedCourseCreationForm : public Form {
public:
    NeedCourseCreationForm() : Form(FormType::NeedCourseCreation) {}

    void fillFormInfo() {
        std::cout << "NeedCourseCreationForm: Fill with course creation details." << std::endl;
    }

    void execute() {
        if (isSigned) {
            std::cout << "Need for course creation action executed." << std::endl;
        } else {
            std::cout << "Need for course creation action cannot be executed as it's not signed." << std::endl;
        }
    }
};

class SubscriptionToCourseForm : public Form {
public:
    SubscriptionToCourseForm() : Form(FormType::SubscriptionToCourse) {}

    void fillFormInfo() {
        std::cout << "SubscriptionToCourseForm: Fill with subscription details." << std::endl;
    }

    void execute() {
        if (isSigned) {
            std::cout << "Subscription to course action executed." << std::endl;
        } else {
            std::cout << "Subscription to course action cannot be executed as it's not signed." << std::endl;
        }
    }
};
#endif