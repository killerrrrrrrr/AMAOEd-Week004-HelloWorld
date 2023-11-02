#ifndef _MATHSUBJECT
#define _MATHSUBJECT

#include <string>
#include "subject.h" // we added the subject header file

using namespace std;

class MathSubject : public Subjects { // we inherit the subject class
    private:
        int mNumberStudents;

    public:
        MathSubject(string, int, int);
        int getNumberOfStudents();
};

// We have created a constructor that will hold the Course Number,
// Subject ID and the number of students

MathSubject::MathSubject(string courseNumber, int id, int nStudents)
: Subjects("Mathermatics", courseNumber, id) // we called the constructor Subject
// and placed the value from the constructor of our MathSubject class
{
    // remember we have a constructor for our Subject class ... we call that by..:
    // Now we initialize our property

    this->mNumberStudents = nStudents;
}

//lastly, we write the body of our accessor
int MathSubject::getNumberOfStudents() {
    return this->mNumberStudents;
}


#endif