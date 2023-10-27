#pragma once

#include "Form.hpp"

class Headmaster {
public:
    void signForm(Form* form);
    void executeForm(Form* form);
    void assignCourse(Professor* professor, Course* course);
};

