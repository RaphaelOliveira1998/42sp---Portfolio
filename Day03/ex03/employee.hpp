#ifndef employee_hpp

class Employee {
private:
    int totalHoursWorked;
    int totalHoursSchool;

public:
int hourlyRate;
    Employee(int rate) : totalHoursWorked(0), totalHoursSchool(0), hourlyRate(rate) {}
    virtual ~Employee() {}
    virtual int getEmployeeID() const = 0;
    virtual int executeWorkday() = 0;

    void addWorkHours(int hours) {
        totalHoursWorked += hours;
    }

    void addSchoolHours(int hours) {
        totalHoursSchool += hours;
    }

    int getTotalHoursWorked() const {
        return totalHoursWorked;
    }

    int getTotalHoursSchool() const {
        return totalHoursSchool;
    }
};
#endif