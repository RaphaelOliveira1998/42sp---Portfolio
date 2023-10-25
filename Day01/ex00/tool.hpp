#ifndef tool_hpp
#define tool_hpp
#include <iostream>

class Tool {
public:
    int numberOfUses;

    Tool(int uses);
    virtual void use();
    virtual std::string getToolType() = 0;
};

#endif