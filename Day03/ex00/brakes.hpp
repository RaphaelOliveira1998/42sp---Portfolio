#ifndef brakes_hpp
#define brakes_hpp

#include <iostream>

class Brakes {
private:
    int brakeForce;
    bool emergencyBrakes;

public:
    Brakes() : brakeForce(0), emergencyBrakes(false) {}

    void applyForceOnBrakes(int force) {
        brakeForce = force;
        std::cout << "Freios acionados com " << force << "N de força." << std::endl;
    }

    void applyEmergencyBrakes() {
        emergencyBrakes = true;
        brakeForce = 1000;
        std::cout << "Freios de emergência acionados!" << std::endl;
    }
};

#endif
