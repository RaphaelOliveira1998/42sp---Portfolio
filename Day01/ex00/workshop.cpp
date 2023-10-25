#include "workshop.hpp"
#include <iostream>

void Workshop::registerWorker(Worker* worker) {
    workers.push_back(worker);
}

void Workshop::releaseWorker(Worker* worker) {
    for (std::vector<Worker*>::iterator it = workers.begin(); it != workers.end(); ++it) {
        if (*it == worker) {
            workers.erase(it);
            break;
        }
    }
}

void Workshop::executeDayWork() {
    for (std::vector<Worker*>::iterator it = workers.begin(); it != workers.end(); ++it) {
        (*it)->work();
    }
}