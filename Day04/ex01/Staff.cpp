#include <vector>
#include <iostream>
#include "Staff.hpp"

std::vector<Staff*> StaffList::staffs;

void StaffList::addStaffMember(Staff* staff) {
        staffs.push_back(staff);
}

void StaffList::removeStaffMember(int staffID) {
    for (std::vector<Staff*>::iterator it = staffs.begin(); it != staffs.end(); ++it) {
    if ((*it)->staffID == staffID) {
        delete *it;
        staffs.erase(it);
        break; 
        }
    }
}