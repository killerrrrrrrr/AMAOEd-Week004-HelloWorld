#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main () {

    int age = 60;

    if (age < 19) {
        cout << "Minor!" << endl;
    } else if (age < 30) {
        cout << "Young Adult!" << endl;
    } else if (age < 50) {
        cout << "Adult!" << endl;
    } else {
        cout << "Senior!" << endl;
    }

    int month = 7;

    switch (month)
    {
    case 1:
        cout << "January" << endl;
        break;
    case 2:
        cout << "February" << endl;
        break;
    case 3:
        cout << "March" << endl;
        break;
    case 4:
        cout << "April" << endl;
        break;
    case 5:
        cout << "May" << endl;
        break;
    default:
        cout << "Month is not recognized.." << endl;
    }

    return EXIT_SUCCESS;
}


 