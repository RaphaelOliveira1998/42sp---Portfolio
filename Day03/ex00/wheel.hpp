#ifndef wheel_hpp
#define wheel_hpp

#include <iostream>

class Wheel {
private:
    int wheelAngle;

public:
    Wheel() : wheelAngle(0) {}

    void turnWheel(int angle) {
        wheelAngle = angle;
        std::cout << "Virando o volante em " << angle << " graus." << std::endl;
    }

    void straightenWheels() {
        wheelAngle = 0;
        std::cout << "Volante endireitado." << std::endl;
    }
};

#endif
