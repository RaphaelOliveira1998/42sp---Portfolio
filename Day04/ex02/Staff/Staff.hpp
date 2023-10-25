#include "Person.hpp"
#include <vector>
#ifndef staff_hpp

class Staff : public Person {
private:
	StaffList* staffList;
public:
	Staff() {
        staffList = new StaffList();
    }

    ~Staff() {
        delete staffList;
    }

    Staff* getStaff() {
        return this;
    }

    void sign(Form* p_form) {
        staffList->addForm(p_form);
    }

    std::vector<Form*> getForms() {
        return staffList->getForms();
    }

    class StaffList {
    private:
        std::vector<Form*> forms;

    public:
        void addForm(Form* form) {
            forms.push_back(form);
        }

        std::vector<Form*> getForms() {
            return forms;
        }
    };
};
#endif