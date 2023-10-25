#ifndef workshop_hpp
#define workshop_hpp

#include <vector>
#include "worker.hpp"

class Workshop {
private:
    std::vector<Worker*> workers;

public:
    void registerWorker(Worker* worker);
    void releaseWorker(Worker* worker);
    void executeDayWork();
};

#endif