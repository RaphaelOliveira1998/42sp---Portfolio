#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "ILogger.hpp"
#include "FileLogger.hpp"
#include "ConsoleLogger.hpp"

int main() {
    FileLogger fileLogger("log.txt");
    ConsoleLogger streamLogger(std::cout);

    std::vector<ILogger*> loggers;
    loggers.push_back(&fileLogger);
    loggers.push_back(&streamLogger);

    std::vector<std::string> logMessages;
    logMessages.push_back("Log");
    logMessages.push_back("De");
    logMessages.push_back("Teste");

    for (size_t i = 0; i < logMessages.size(); ++i) {
        const std::string& message = logMessages[i];
        for (std::vector<ILogger*>::iterator it = loggers.begin(); it != loggers.end(); ++it) {
            ILogger* logger = *it;
            logger->write(message);
        }
    }


    return 0;
}
