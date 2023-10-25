#ifndef hourlyEmployee_hpp
#include <iostream>

class Tempworker : public Employee {
private:
    int mobHours;
    int employeeID;

public:
    Tempworker(int rate, int id) : Employee(rate), mobHours(0), employeeID(id) {}
    virtual ~Tempworker() {}

    void mobilize(int hours) {
        mobHours += hours;
    }

    int getEmployeeID() const {
        return employeeID;
    }

    int executeWorkday() {
        if (mobHours > 0) {
            int hoursWorked = std::min(7, mobHours);
            mobHours -= hoursWorked;
            addWorkHours(hoursWorked);
            return hoursWorked * hourlyRate;
        }
        return 0;
    }
};
#endif