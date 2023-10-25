#include "tool.hpp"
#include <iostream>

Tool::Tool(int uses) : numberOfUses(uses) {}

void Tool::use() {
    std::cout << "Usando ferramentas" << std::endl;
}