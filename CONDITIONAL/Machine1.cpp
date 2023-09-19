#include <iostream>
#include <string>

using namespace std;

int main() {

    string studentname, program, yearname;
    int yearlevel;
    double numofunits, rateperunit, tuitionfee, downpayment, balance;

    cout << "Student Name: ";
    getline (cin, studentname);

    cout << "Program/Course: ";
    getline (cin, program);

    cout << "Year Level: ";
    cin >> yearlevel;

    cout << "No. of Units: ";
    cin >> numofunits;

    cout << endl;


    switch (yearlevel) 
    {
    case 1:
        yearname = "Freshman";
        rateperunit = 1500;
        break;
    case 2:
        yearname = "Sophomore";
        rateperunit = 1800;
        break;
    case 3:
        yearname = "Junior";
        rateperunit = 2000;
        break;
    case 4:
    case 5:
        yearname = "Senior";
        rateperunit = 2300;
        break;
    default:
        cout << "Invalid year level. Please enter a valid value (1 to 5)." << endl;
        return 1;
    }

    tuitionfee = numofunits * rateperunit;
    downpayment = 0.3 * tuitionfee;
    balance = tuitionfee - downpayment;

    cout << endl;
    
    cout << "ENROLLMENT SLIP" << endl;
    cout << "Student Name: " << studentname << endl;
    cout << "Program/Course: " << program << endl;
    cout << "Year Name: " << yearname << endl;
    cout << "No. of Units: " << numofunits << endl;
    cout << "Tuition Fee: " << tuitionfee << endl;
    cout << "Down Payment: " << downpayment << endl;
    cout << "Balance: " << balance << endl;

    return 0;


}