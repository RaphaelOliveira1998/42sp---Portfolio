#ifndef salariedEmployee_hpp
#include <iostream>

class ContractEmployee : public Employee {
private: 
    int vacationHours;
    int employeeID;

public:
    ContractEmployee(int rate, int id) : Employee(rate), vacationHours(0), employeeID(id) {}

    void takeVacation(int hours) {
        vacationHours += hours;
    }

    int getEmployeeID() const {
        return employeeID;
    }

    int executeWorkday() {
        if (vacationHours == 0) {
            int hoursWorked = 7;
            addWorkHours(hoursWorked);
            return hoursWorked * hourlyRate;
        }
        vacationHours--;
        return 0;
    }
};

class Apprentice : public Employee {
private:
    int schoolHours;
    int schoolPayRate;
    int employeeID;

public:
    Apprentice(int rate, int PayRate, int id) : Employee(rate), schoolHours(0), schoolPayRate(PayRate), employeeID(id) {}

    void attendSchool(int hours) {
        schoolHours += hours;
    }

    int getEmployeeID() const {
        return employeeID;
    }

    int executeWorkday() {
        if (schoolHours > 0) {
            int hoursWorked = std::min(7, schoolHours);
            schoolHours -= hoursWorked;
            addWorkHours(hoursWorked);
            return (hoursWorked * hourlyRate) + (hoursWorked * schoolPayRate / 2);
        }
        return 0;
    }
};
#endif