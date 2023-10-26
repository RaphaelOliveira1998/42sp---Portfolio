#pragma once

#include <iostream>
#include <string>

enum FormType {
    CourseFinished,
    NeedMoreClassRoom,
    NeedCourseCreation,
	SubscriptionToCourse
};

class Form {
public:
    Form();
    void setInformation(const std::string& info);
    const std::string& getInformation() const;
    bool isFormSigned() const;
    bool isFormExecuted() const;
    void sign();
    void execute(); 

private:
    std::string information;
    bool isSigned;
    bool isExecuted;      
};

