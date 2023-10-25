#include "engine.hpp"
#include "transmission.hpp"
#include "brakes.hpp"
#include "wheel.hpp"

class Car {
private:
    Engine engine;
    Transmission transmission;
    Brakes brakes;
    Wheel wheel;

public:
    void start() {
        engine.start();
    }

    void stop() {
        engine.stop();
    }

    void accelerate(int speed) {
        engine.accelerate(speed);
    }

    void shiftGearUp() {
        transmission.shiftGearUp();
    }

    void shiftGearDown() {
        transmission.shiftGearDown();
    }

    void reverse() {
        transmission.reverse();
    }

    void turnWheel(int angle) {
        wheel.turnWheel(angle);
    }

    void straightenWheels() {
        wheel.straightenWheels();
    }

    void applyForceOnBrakes(int force) {
        brakes.applyForceOnBrakes(force);
    }

    void applyEmergencyBrakes() {
        brakes.applyEmergencyBrakes();
    }
};
