#include "ConsoleLogger.hpp"
#include <iostream>

ConsoleLogger::ConsoleLogger(std::ostream& output) : outputConsole(output) {}

void ConsoleLogger::write(const std::string& message) {
    outputConsole << message << std::endl;
}