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
private:
    std::string description;
    bool isCompleted;

public:
    Form(const std::string& desc) : description(desc), isCompleted(false) {}

    void fillForm(const std::string& data) {
        
    }

    bool isFormCompleted() const {
        return isCompleted;
    }

    virtual void execute() = 0;
};
#endif