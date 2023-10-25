#ifndef person_hpp
#include "Room.hpp"

class Person
{
private:
	std::string name;
	Room* _currentRoom;
public:
	std::string getName() const {
		return name;
	};
	Room* room() {
		return (_currentRoom);
	}
};
#endif