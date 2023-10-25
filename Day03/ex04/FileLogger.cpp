#include "FileLogger.hpp"
#include <fstream>
#include <iostream>

FileLogger::FileLogger(const std::string& filename) {
    file.open(filename.c_str(), std::ios::out | std::ios::app);
}

void FileLogger::write(const std::string& message) {
    file << message << std::endl;
}