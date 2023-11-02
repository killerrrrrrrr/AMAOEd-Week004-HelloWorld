#include <string>
#include "subject2.h"

using namespace std;

class Math : public Subject {
    public:
        Math() : Subject("Mathematics", "CAS001", 5) { }
        string getSubject () {
            return Subject::getSubject();
        }
};