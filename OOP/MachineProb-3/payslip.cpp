#include <string>
#include <iostream>
#include "payslip.h"

using namespace std;

int main () {

    string employeeName;
    double employeeSalary, employeeOT;

    cout << "Enter Employee's Name: ";
    cin >> employeeName;

    cout << "Enter Employee's Salary: ";
    cin >> employeeSalary;

    cout << "Enter Employee's No. of OT: ";
    cin >> employeeOT;

    cout << endl;
    
    Payslip employee1 (employeeName, employeeSalary, employeeOT);
    employee1.displayPayslip();

    
}