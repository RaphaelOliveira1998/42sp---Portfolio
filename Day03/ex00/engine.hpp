#ifndef engine_hpp
#define engine_hpp

#include <iostream>

class Engine {
private:
    bool engineRunning;
    int speed;

public:
    Engine() : engineRunning(false) {}

    void start() {
        if (!engineRunning) {
            engineRunning = true;
            std::cout << "Motor ligado!" << std::endl;
        }
    }

    void stop() {
        if (engineRunning) {
            engineRunning = false;
            std::cout << "Motor parou." << std::endl;
        }
    }

    void accelerate(int _speed) {
        if (engineRunning) {
            speed += _speed;
            std::cout << "Aceleração para " << speed << " km/h." << std::endl;
        }
    }
};

#endif
