#ifndef staff_hpp
#define staff_hpp
#include <string>
#include <vector>
#include <algorithm> 

class Staff : public Person {
public:
    std::string name;
    int staffID;
    std::vector<Staff> staffMembers;

    Staff(std::string _name, int _staffID) : name(_name), staffID(_staffID) {}
    
    void addStaffMember(const Staff& staff) {
        staffMembers.push_back(staff);
    }

    void removeStaffMember(int staffID) {
        staffMembers.erase(std::remove_if(staffMembers.begin(), staffMembers.end(), [staffID](const Staff& s) {
            return s.staffID == staffID;
        }), staffMembers.end());
    }
};
#endif