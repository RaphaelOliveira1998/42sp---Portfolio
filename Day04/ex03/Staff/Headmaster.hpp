#include <iostream>
#include <string>
#include "Form.hpp"

class Headmaster : public Staff
{
public:
    void signAndExecuteForm(Form* form) {
        form->sign();
        form->execute();
    }
};