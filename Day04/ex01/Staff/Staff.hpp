#ifndef staff_hpp
#define staff_hpp
#include <string>
#include <vector>
#include <algorithm>


class Staff : public Person {
public:
    std::string name;
    int staffID;

    Staff(std::string _name, int _staffID) : name(_name), staffID(_staffID) {}

};

class StaffList {
public:
    static std::vector<Staff*> staffs;
    static void addStaffMember(Staff* staff); 
    static void removeStaffMember(int staffID);
};
#endif