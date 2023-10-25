#ifndef worker_hpp
#define worker_hpp

#include "position.hpp"
#include "statistic.hpp"
#include "tool.hpp"
#include <vector>

class Workshop;

class Worker {
public:
    Position coordonnee;
    Statistic stat;
    std::vector<Tool*> tools;
    static std::vector<Worker*> workersWithTool;

    Worker(int x, int y, int z, int level, int exp);

    void work();
    void giveTool(Tool* givenTool);
    void takeAwayTool(Tool* tool);
    void useTool(Tool* tool);
};

#endif