#ifndef room_hpp
#include <vector>

class Room
{
private:
	long long ID;
	std::vector<Person*> _occupants;

public:
	Room();
	bool canEnter(Person*);
	void enter(Person*);
	void exit(Person*);
	
	void printOccupant();

struct RoomList	{
	std::vector<Room*> allRooms;
};
};
#endif