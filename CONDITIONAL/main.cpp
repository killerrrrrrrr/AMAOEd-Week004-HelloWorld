#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main () {

    string studentname, programcourse;
    int yearlevel;
    float numberofunits;


    cout << "Student Name: ";
    getline (cin, studentname);

    cout << "Program/Course: ";
    getline (cin, programcourse);

    cout << "Year Level: ";
    cin >> yearlevel;

    cout << "No. of Units: ";
    cin >> numberofunits;

    cout << endl;

    if (yearlevel == 1) {
        float tuitionfee = numberofunits * 1500;
        float downpayment = (tuitionfee/100) * 30;
        float balance = tuitionfee - downpayment;
        string yearname = "Freshman";
        cout << " " << " " << "ENROLLMENT SLIP" << " " << " " << endl;
        cout << "Student Name: " << studentname << endl;
        cout << "Program/Course: " << programcourse << endl;
        cout << "Year Name: " << yearname << endl;
        cout << "No. of Units: " << numberofunits << endl;
        cout << "Tuition Fee: " << tuitionfee << endl;
        cout << "Down Payment: " << downpayment << endl;
        cout << "Balance: " << balance << endl;
    } else if (yearlevel == 2) {
        float tuitionfee = numberofunits * 1800;
        float downpayment = (tuitionfee/100) * 30;
        float balance = tuitionfee - downpayment;
        string yearname = "Sophomore";
        cout << " " << " " << "ENROLLMENT SLIP" << " " << " " << endl;
        cout << "Student Name: " << studentname << endl;
        cout << "Program/Course: " << programcourse << endl;
        cout << "Year Name: " << yearname << endl;
        cout << "No. of Units: " << numberofunits << endl;
        cout << "Tuition Fee: " << tuitionfee << endl;
        cout << "Down Payment: " << downpayment << endl;
        cout << "Balance: " << balance << endl;
    } else if (yearlevel == 3) {
        float tuitionfee = numberofunits * 2000;
        float downpayment = (tuitionfee/100) * 30;
        float balance = tuitionfee - downpayment;
        string yearname = "Junior";
        cout << " " << " " << "ENROLLMENT SLIP" << " " << " " << endl;
        cout << "Student Name: " << studentname << endl;
        cout << "Program/Course: " << programcourse << endl;
        cout << "Year Name: " << yearname << endl;
        cout << "No. of Units: " << numberofunits << endl;
        cout << "Tuition Fee: " << tuitionfee << endl;
        cout << "Down Payment: " << downpayment << endl;
        cout << "Balance: " << balance << endl;
    } else if (yearlevel == 4 || 5) {
        float tuitionfee = numberofunits * 2300;
        float downpayment = (tuitionfee/100) * 30;
        float balance = tuitionfee - downpayment;
        string yearname = "Senior";
        cout << " " << " " << "ENROLLMENT SLIP" << " " << " " << endl;
        cout << "Student Name: " << studentname << endl;
        cout << "Program/Course: " << programcourse << endl;
        cout << "Year Name: " << yearname << endl;
        cout << "No. of Units: " << numberofunits << endl;
        cout << "Tuition Fee: " << tuitionfee << endl;
        cout << "Down Payment: " << downpayment << endl;
        cout << "Balance: " << balance << endl;
    } else {
        cout << "Error: Please only choose numbers 1-5 for the Year Level." << endl;
    }
    return EXIT_SUCCESS;
}
