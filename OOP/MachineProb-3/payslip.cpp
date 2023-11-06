#include <string>
#include <iostream>
#include "payslip.h"

using namespace std;

int main () {

    string employeeName;
    double employeeSalary, employeeOT;


    
    Payslip employee1 (employeeName, employeeSalary, employeeOT);

    cout << "Enter Employee's Name: ";
    getline(cin, employeeName); 
    employee1.setName(employeeName);


    while (true) {
        cout << "Basic Salary: Php ";
        cin >> employeeSalary;
        if (employeeSalary >= 10000) {
            employee1.setSalary(employeeSalary);
            break;
        }
        else {
            cout << "Basic salary should not be less than Php 10,000. Please try again." << endl;
        }
    }


    while (true) {
        cout << "No. of OT Hours: ";
        cin >> employeeOT;
        if (employeeOT >= 1) {
            employee1.setOvertimeHours(employeeOT);
            break;
        }
        else {
            cout << "Minimum overtime hours is 1. Please try again." << endl;
        }
    }

    
    employee1.displayPayslip();

    cout << endl;

    return 0;
}