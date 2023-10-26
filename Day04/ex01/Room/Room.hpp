#ifndef room_hpp
#include <vector>
#include <iostream>

class Room {
public:
    std::string name;
    int roomID;

    Room(std::string _name, int _roomID) : name(_name), roomID(_roomID) {}
};

class RoomList {
public:
    static std::vector<Room*> rooms;
    static void addRoom(Room* room);
    static void removeRoom(int roomID);
};
#endif