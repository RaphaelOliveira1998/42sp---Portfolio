#ifndef secretarialoffice_hpp
#include "Room.hpp"
#include "Form.hpp"
#include <vector>

class SecretarialOffice: public Room
{
private:
	std::vector<Form*> _archivedForms;

public:

};
#endif