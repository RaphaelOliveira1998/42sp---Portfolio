#include "Room.hpp"
#include <vector>
#include <string>

std::vector<Room*> RoomList::rooms;

void RoomList::addRoom(Room* room) {
    rooms.push_back(room);
}

void RoomList::removeRoom(int roomID) {
    for (std::vector<Room*>::iterator it = rooms.begin(); it != rooms.end(); ++it) {
        if ((*it)->roomID == roomID) {
            delete *it;
            rooms.erase(it);
            break; 
        }
    }
}
