class Person
{
private:
	std::string _name;
	Room* _currentRoom;
public:
	std::string getName() const {
		return name;
	};
	Room* room() {return (_currentRoom);}
};