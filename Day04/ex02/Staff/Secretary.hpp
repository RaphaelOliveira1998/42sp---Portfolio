#pragma once

#include "Form.hpp"
#include "Headmaster.hpp"

class Secretary {
public:
    Form* createForm(FormType type);
    void fillForm(Form* form, const std::string& information);
    void submitForm(Headmaster& headmaster, Form* form);
};

