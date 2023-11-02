#include <string>
#include <iostream>
#include "student.h"

using namespace std;

int main () {

Person person("Sheena", "Tagum", "Female", 29, "VA");
person.DisplayPerson();


Student person2("Sheena", "Tagum", "Female", 29, "VA", "BSCS", 1, "AMA");

person2.setUniversity("AMA University");
cout << "Enrolled University: " << person2.getUniversity() << endl;

person2.setProgram("Computer Science");
cout << "Academic Program: " << person2.getProgram() << endl;

person2.setYear(1);
cout << "Year in College: " << person2.getYear() << "st year" << endl;



return 0;

};
