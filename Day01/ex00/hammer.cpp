#include "hammer.hpp"
#include <iostream>

Hammer::Hammer(int uses) : Tool(uses) {}

void Hammer::use() {
    if (numberOfUses == 0){
        std::cout << "O martelo está quebrado." << std::endl;
    } else {
    std::cout << "Usando martelo." << std::endl;
    numberOfUses--;
    }
}

std::string Hammer::getToolType() {
    return "Hammer";
}