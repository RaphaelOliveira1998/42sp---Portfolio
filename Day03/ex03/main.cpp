#include <iostream>
#include "employee.hpp"
#include "employeeManagement.hpp"
#include "hourlyEmployee.hpp"
#include "salariedEmployee.hpp"

int main() {
    EmployeeManager empManager;

    Tempworker* TempWorker01 = new Tempworker(10, 1);
    ContractEmployee* ContractEmployee01 = new ContractEmployee(50, 2);
    Apprentice* Apprentice01 = new Apprentice(5, 9, 3);

    empManager.addEmployee(TempWorker01);

    empManager.addEmployee(ContractEmployee01);
    empManager.addEmployee(Apprentice01);

    TempWorker01->mobilize(28);
    ContractEmployee01->takeVacation(2);
    Apprentice01->attendSchool(20);

    empManager.executeWorkday();
    empManager.executeWorkday();
    empManager.executeWorkday();

    empManager.calculatePayroll();
    //empManager.removeEmployee(TempWorker01);

    return 0;
}