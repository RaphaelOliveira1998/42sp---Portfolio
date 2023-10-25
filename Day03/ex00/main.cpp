#include <iostream>
#include "car.hpp"

int main() {
    Car Car;
    
    Car.start();
    Car.shiftGearUp();
    Car.accelerate(80);
    Car.turnWheel(45);
    Car.reverse();
    Car.applyForceOnBrakes(400);
    Car.applyEmergencyBrakes();
    Car.stop();

    return 0;
}