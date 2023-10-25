#include "worker.hpp"
#include "position.hpp"
#include "statistic.hpp"
#include <iostream>

Worker::Worker(int x, int y, int z, int level, int exp) {
        coordonnee.x = x;
        coordonnee.y = y;
        coordonnee.z = z;
        stat.level = level;
        stat.exp = exp;
    }

void Worker::work() {
    std::cout << "\n" << std::endl;
}

std::vector<Worker*> Worker::workersWithTool;

void Worker::giveTool(Tool* givenTool) {
    for (std::vector<Worker*>::iterator it = workersWithTool.begin(); it != workersWithTool.end(); ++it) {
        Worker* worker = *it;
        if (worker != this) {
            worker->takeAwayTool(givenTool);
        }
    }
    tools.push_back(givenTool);
    workersWithTool.push_back(this);
}

void Worker::takeAwayTool(Tool* tool) {
    for (std::vector<Tool*>::iterator it = tools.begin(); it != tools.end();) {
        if (*it == tool) {
            it = tools.erase(it);
        } else {
            ++it;
        }
    }
}

void Worker::useTool(Tool* tool) {
    tool->use();
}
