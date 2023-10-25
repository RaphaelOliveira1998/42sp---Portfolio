#ifndef hammer_hpp
#define hammer_hpp

#include "tool.hpp"

class Hammer : public Tool {
public:
    Hammer(int uses);

    void use();
    std::string getToolType();
};

#endif