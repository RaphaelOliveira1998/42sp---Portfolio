#ifndef FileLogger_hpp
#include "ILogger.hpp"
#include <fstream>

class FileLogger : public ILogger {
private:
    std::ofstream file;

public:
    FileLogger(const std::string& filename);
    void write(const std::string& message);
};
#endif