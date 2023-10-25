#include "Staff.hpp" 
#include "Form.hpp"  
class Secretary : public Staff {
public:
    Secretary() {
        
    }

    Form* createForm(FormType p_formType) { 
        Form* newForm = nullptr;
        switch (p_formType) {
            case FormType::CourseFinished:
                newForm = new CourseFinishedForm();
                break;
            case FormType::NeedMoreClassRoom:
                newForm = new NeedMoreClassRoomForm();
                break;
            case FormType::NeedCourseCreation:
                newForm = new NeedCourseCreationForm();
                break;
            case FormType::SubscriptionToCourse:
                newForm = new SubscriptionToCourseForm();
                break;
        }
        return newForm;
    }

    void archiveForm() {
    }

    
};
