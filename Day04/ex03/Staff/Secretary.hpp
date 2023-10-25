#include "Staff.hpp" 
#include "Form.hpp"
#include "CourseFinishedForm.hpp"
#include "NeedCourseCreationForm.hpp"
#include "NeedMoreClassRoomForm.hpp"
#include "SubscriptionToCourseForm.hpp"
#ifndef secretary_hpp

class Secretary : public Staff {
public:
    Form* createForm(FormType formType) {
        switch (formType) {
            case FormType::CourseFinished:
                return new CourseFinishedForm();
            case FormType::NeedMoreClassRoom:
                return new NeedMoreClassRoomForm();
            case FormType::NeedCourseCreation:
                return new NeedCourseCreationForm();
            case FormType::SubscriptionToCourse:
                return new SubscriptionToCourseForm();
        }
        return NULL; 
    }

    void fillForm(Form* form, const std::string& data) {
        form->fillForm(data);
    }
};
#endif