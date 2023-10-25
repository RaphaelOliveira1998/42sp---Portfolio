#ifndef shovel_hpp
#define shovel_hpp

#include "tool.hpp"

class Shovel : public Tool {
public:
    Shovel(int uses);

    void use();
    std::string getToolType();
};

#endif