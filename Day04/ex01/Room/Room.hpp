#ifndef room_hpp
#include <vector>
#include <iostream>
#include <algorithm> 


class Room {
public:
    std::string name;
    int roomID;
    std::vector<Room> rooms;

    Room(std::string _name, int _roomID) : name(_name), roomID(_roomID) {}

    void addRoom(const Room& room) {
        rooms.push_back(room);
    }

    void removeRoom(int roomID) {
        rooms.erase(std::remove_if(rooms.begin(), rooms.end(), [roomID](const Room& r) {
            return r.roomID == roomID;
        }), rooms.end());
    }
};

#endif