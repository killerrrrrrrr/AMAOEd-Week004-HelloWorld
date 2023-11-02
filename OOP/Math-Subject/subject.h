#include <string>

using namespace std;

class Subjects {
    private:
        string courseNumber, mTitle;
        int id, nStudents;

    public:
        Subjects(string title, string coursenumber, int ids) {
            courseNumber = coursenumber;
            id = ids;
            mTitle = title;
        }

        string getSubjectTitle() {
            return this->mTitle;
        }

        string getCourseNumber() {
            return this->courseNumber;
        }

        
        int getSubjectId() {
            return this->id;
        }


};