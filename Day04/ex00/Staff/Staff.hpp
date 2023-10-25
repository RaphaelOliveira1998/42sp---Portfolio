#include "Person.hpp"
#ifndef staff_hpp

class Staff : public Person
{
private:
	StaffList* staffList;
public:
	void sign(Form* p_form);
	Staff();

struct StaffList	{
	/* data */
};

};
#endif