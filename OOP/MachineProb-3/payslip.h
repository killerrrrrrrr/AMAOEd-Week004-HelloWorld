#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Payslip {
    private:

    string mName;
    char payGrade;
    double basicSalary;
    double overTimeHours;
    double overTimePay;
    double grossPay;
    double netPay;
    double withHoldingTax;
    double taxRate;

    public:

    Payslip(string name, double basicsalary, double overtimehours) {
            mName = name;
            basicSalary = basicsalary;
            overTimeHours = overtimehours;
            
        }

        void setName (string name) {
            mName = name;
        }

        string getName () {
            return mName;
        }

        void setSalary (double basicsalary) {
            basicSalary = basicsalary;
        }

        double getSalary () {
            return basicSalary;
        }

        void setOvertimeHours (double overtimehours) {
                overTimeHours = overtimehours;
        }

        double getOvertimeHours () {
            return overTimeHours;
        }

        void determinePayGradeAndTaxRate () {

            if (basicSalary >= 10000 && basicSalary <= 15000) {
                taxRate = 10;
                payGrade = 'A';
            } else if (basicSalary > 15000 && basicSalary < 20000) {
                taxRate = 10;
                payGrade = 'B';
            }else if (basicSalary >= 20000 && basicSalary <= 25000) {
                taxRate = 15;
                payGrade = 'A';
            } else if (basicSalary > 25000 && basicSalary < 30000){
                taxRate = 15;
                payGrade = 'B';
            }else if (basicSalary >= 30000 && basicSalary <= 35000) {
                taxRate = 20;
                payGrade = 'A';
            } else if (basicSalary > 35000 && basicSalary < 40000){
                taxRate = 20;
                payGrade = 'B';
            }else if (basicSalary >= 40000 && basicSalary <= 45000) {
                taxRate = 25;
                payGrade = 'A';
            } else if (basicSalary > 45000 && basicSalary < 50000){
                taxRate = 25;
                payGrade = 'B';
            }else if (basicSalary >= 50000 && basicSalary <= 55000) {
                taxRate = 30;
                payGrade = 'A';
            } else if (basicSalary > 55000){
                taxRate = 30;
                payGrade = 'B';
            } else {
                return;
            }
          

        }

        void computePay () {

            double sss = 500;
            double pagIbig = 200;
            double philHealth = 100;

            double fixValues = sss + pagIbig + philHealth;

            overTimePay = overTimeHours * (0.01 * basicSalary);
            grossPay = basicSalary + overTimePay;
            withHoldingTax = grossPay * (taxRate/100);
            netPay = grossPay - withHoldingTax - fixValues;

           
            
        }

        void displayPayslip () {

            determinePayGradeAndTaxRate();
            computePay();

             if (overTimeHours < 1 && basicSalary < 10000) {


            cout << "Minimum overtime hours is 1 hour. " << endl;
            cout << "Basic salary should not be less than 10,000." << endl;
            return;
           

             } else {

                
            cout << fixed << setprecision(2);
            
            cout << "\nEmployee Payslip\n";
            cout << "Employee Name      :  " << mName << endl;
            cout << "Basic Salary       :  Php " << basicSalary << endl;
            cout << "Pay Grade          :  " << payGrade << endl;
            cout << "No. of OT Hours    :  " << overTimeHours << endl;
            cout << "OT Pay             :  Php " << overTimePay << endl;
            cout << "Gross Pay          :  Php " << grossPay << endl;
            cout << "Withholding Tax    :  Php " << withHoldingTax << endl;
            cout << "Net Pay            :  Php " << netPay << endl;
               
            }
        }
};


