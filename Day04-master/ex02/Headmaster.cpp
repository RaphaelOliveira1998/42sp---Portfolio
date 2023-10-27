#include "Headmaster.hpp"
#include "Form.hpp"

void Headmaster::signForm(Form* form) {
    if (!form->isFormSigned()) {
        form->sign();
    }
}

void Headmaster::executeForm(Form* form) {
    if (form->isFormSigned() && !form->isFormExecuted()) {
        form->execute();
    }
}

