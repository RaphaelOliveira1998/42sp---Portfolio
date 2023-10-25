#include "shovel.hpp"
#include <iostream>

Shovel::Shovel(int uses) : Tool(uses) {}

void Shovel::use() {
    if (numberOfUses == 0){
        std::cout << "A pá está quebrada." << std::endl;
    } else {
    std::cout << "Usando pá." << std::endl;
    numberOfUses--;
    }
}

std::string Shovel::getToolType() {
    return "Shovel";
}