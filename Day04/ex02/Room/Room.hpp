#ifndef room_hpp
#include <vector>
#include <iostream>
#include "Person.hpp"

class Person;

class Room {
private:
    long long ID;
    std::vector<Person*> _occupants;
    int maxCapacity;

public:
    Room(long long id, int capacity) : ID(id), maxCapacity(capacity) {}

    bool canEnter(Person* person) {
        if (_occupants.size() < maxCapacity) {
            return true;
        }
        return false;
    }

    void enter(Person* person) {
        if (canEnter(person)) {
            _occupants.push_back(person);
        }
    }

    void exit(Person* person) {
        for (auto it = _occupants.begin(); it != _occupants.end(); ++it) {
            if (*it == person) {
                _occupants.erase(it);
                break;
            }
        }
    }

    void printOccupants() {
        std::cout << "Occupants of Room " << ID << ":\n";
        for (Person* occupant : _occupants) {
            std::cout << occupant->getName() << std::endl;
        }
    }

    struct RoomList {
        std::vector<Room*> allRooms;
    };
};
#endif