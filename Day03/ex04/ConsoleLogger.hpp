#ifndef ConsoleLogger_hpp
#include "ILogger.hpp"
#include <iostream>

class ConsoleLogger : public ILogger {
private:
    std::ostream& outputConsole;

public:
    ConsoleLogger(std::ostream& output);
    void write(const std::string& message);
};
#endif