#include <cstdlib>
#include <iostream>
#include <string>

#include "MathSubject.h"

using namespace std;

int main () {
    Subjects math("Mathermatics", "M115", 1);
    MathSubject mathSubject("M115", 1, 50);

    cout << "FOR SUBJECT: " << endl;
    cout << "* Subject Title = " << math.getSubjectTitle() << endl;
    cout << "* Course Number = " << math.getCourseNumber() << endl;
    cout << "* Subject ID = " << math.getSubjectId() << endl;
    cout << endl;

    // We now call our MathSubject instance
    cout << "FOR SUBJECT: " << endl; // since our MathSubject extends Subject class 
                                    // we can use the methods of Subject class
                                    // from the mathSubject object
    cout << "* Subject Title = " << mathSubject.getSubjectTitle() << endl;
    cout << "* Course Number = " << mathSubject.getCourseNumber() << endl;
    cout << "* Subject ID = " << mathSubject.getSubjectId() << endl;
    // and since we added another method for mathSubject, we can call that one as well...
    cout << "* Number of Students = " << mathSubject.getNumberOfStudents() << endl;

    return 0;

}
