#ifndef employeeManagement_hpp
#include <vector>
#include <iostream>

class EmployeeManager {
private:
    std::vector<Employee*> employees;

public:
    void addEmployee(Employee* emp) {
        employees.push_back(emp);
    }

    void removeEmployee(Employee* emp) {
        for (size_t i=0; i < employees.size(); ++i) {
            if (employees[i] == emp) {
                employees.erase(employees.begin() + i);
                delete emp;
                break;
            }
        }
    }

    void executeWorkday() {
        for (std::vector<Employee*>::iterator it = employees.begin(); it != employees.end(); ++it) {
            Employee* emp = *it;
            emp->executeWorkday();
        }
    }

    void calculatePayroll() {
        std::cout << "Pagamento para último mês completo: " << std::endl;
        for (std::vector<Employee*>::iterator it = employees.begin(); it != employees.end(); ++it) {
            Employee* emp = *it;
            int totalPay = emp->getTotalHoursWorked() * emp->hourlyRate;
            std::cout << "ID do funcionário: " << emp->getEmployeeID() << ", Pagamento total: " << totalPay << std::endl;
        }
    }
};
#endif