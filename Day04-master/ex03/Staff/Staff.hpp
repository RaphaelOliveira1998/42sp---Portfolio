#ifndef staff_hpp
#define staff_hpp
#include <string>
#include <vector>
#include <algorithm>
#include "Singleton.hpp"

class Staff {
public:
    std::string staffName;
    int staffID;

    Staff(const std::string& name, int id) : staffName(name), staffID(id) {}

};

class StaffList : public Singleton<StaffList> {
public:
    static std::vector<Staff*> staffs;
    static void addStaffMember(Staff* staff); 
    static void removeStaffMember(int staffID);

    friend class Singleton;
};
#endif