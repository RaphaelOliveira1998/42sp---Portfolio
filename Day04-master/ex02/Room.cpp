#include "Room.hpp"
#include <vector>
#include <string>

std::vector<Room*> RoomList::rooms;

void RoomList::addRoom(Room* room) {
    rooms.push_back(room);
}

void RoomList::removeRoom(int roomID) {
    for (std::vector<Room*>::iterator it = rooms.begin(); it != rooms.end(); ) {
        if ((*it)->roomID == roomID) {
            it = rooms.erase(it); 
        } else {
            ++it;
        }
    }
}
