#ifndef transmission_hpp
#define transmission_hpp

#include <iostream>

class Transmission {
private:
    int gear;
    bool inReverse;

public:
    Transmission() : gear(0), inReverse(false) {}

    void shiftGearUp() {
        if (gear < 6) {
            gear++;
            std::cout << "Marcha aumentada para " << gear << "." << std::endl;
        }
    }

    void shiftGearDown() {
        if (gear > 0) {
            gear--;
            std::cout << "Marcha reduzida para " << gear << "." << std::endl;
        }
    }

    void reverse() {
        inReverse = !inReverse;
        std::cout << (inReverse ? "Acionado a ré." : "Marcha aumentada") << std::endl;
    }
};

#endif
