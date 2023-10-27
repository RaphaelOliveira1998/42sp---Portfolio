#include "Form.hpp"

Form::Form() : isSigned(false), isExecuted(false) {}

void Form::setInformation(const std::string& info) {
    information = info;
}

const std::string& Form::getInformation() const {
    return information;
}

bool Form::isFormSigned() const {
    return isSigned;
}

bool Form::isFormExecuted() const {
    return isExecuted;
}

void Form::sign() {
    isSigned = true;
}

void Form::execute() {
    isExecuted = true;
}

