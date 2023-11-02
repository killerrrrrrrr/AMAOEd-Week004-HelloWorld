#include <string>
#include <iostream>

using namespace std;

class Person {

    private:
        string mName;
        string mAddress;
        string mGender;
        int mAge;
        string mOccupation;

    public:
        Person(string name, string address, string gender, int age, string occupation) {
            mName = name;
            mAddress = address;
            mGender = gender;
            mAge = age;
            mOccupation = occupation;
        }

        void DisplayPerson() {
        cout << "Name: " << mName << endl;
        cout << "Address: " << mAddress << endl;
        cout << "Gender: " << mGender << endl;
        cout << "Age: " << mAge << endl;
        cout << "Occupation: " << mOccupation << endl;
    }

};
