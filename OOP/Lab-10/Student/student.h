#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "person.h"


using namespace std;

class Student : public Person {

protected:
    string academicProgram;
    int collegeYear;
    string enrolledUniversity;
    

public:

    Student(string name, string address, string gender, int age, string occupation, string program, int year, string university)
        :Person(name, address, gender, age, occupation) 
        {
        academicProgram = program;
        collegeYear = year;
        enrolledUniversity = university;
        }


    void setProgram(string program) {
        academicProgram = program;
    }

    string getProgram() {
        return academicProgram;
    }

    void setYear(int year) {
        collegeYear = year;
    }

    int getYear() {
        return collegeYear;
    }

    void setUniversity(string university) {
        enrolledUniversity = university;
    }

    string getUniversity() {
        return enrolledUniversity;
    }

};

#endif
