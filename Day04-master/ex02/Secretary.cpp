#include "Secretary.hpp"
#include "Headmaster.hpp"

Form* Secretary::createForm(FormType type) {
    (void)type;
    Form* form = new Form();

    return form;
}

void Secretary::fillForm(Form* form, const std::string& studentName) {
    form->setInformation(studentName);
}

void Secretary::submitForm(Headmaster& headmaster, Form* form) {
    headmaster.signForm(form);
}

