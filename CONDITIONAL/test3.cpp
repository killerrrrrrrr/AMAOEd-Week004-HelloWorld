#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main () {
    
    string Month;
    int Day;
    int Year;

    cout << "Month: ";
    getline(cin, Month);

    cout << "Day: ";
    cin >> Day;

    cout << "Year: ";
    cin >> Year;

    cout << Month << " " << Day << ", " << Year << endl;

    char monthName[10];
    short month, day, year;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter year: ";
    cin >> year;
    cout << endl;

    switch (month)
    {
    case 1: strcpy(monthName, "January"); break;
    case 2: strcpy(monthName, "February"); break;
    case 3: strcpy(monthName, "March"); break;
    case 4: strcpy(monthName, "April"); break;
    case 5: strcpy(monthName, "May"); break;
    case 6: strcpy(monthName, "June"); break;
    case 7: strcpy(monthName, "July"); break;
    case 8: strcpy(monthName, "August"); break;
    case 9: strcpy(monthName, "September"); break;
    case 10: strcpy(monthName, "October"); break;
    case 11: strcpy(monthName, "November"); break;
    case 12: strcpy(monthName, "December"); break;
    default: cout << "Invalid Month!" << endl;
    }
    if (strcmp(monthName,"")) {
        cout << monthName << " " << day << ", " << year << endl;
    }

    return EXIT_SUCCESS;
}