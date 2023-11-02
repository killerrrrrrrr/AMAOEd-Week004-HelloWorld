#ifndef DOG_H
#define DOG_H

#include <string>
#include "LeggedMammal.h"


using namespace std;

class Dog : public LeggedMammal {
protected:
    string mBreed;
    string mSize;
    bool isRegistered;
    

public:

    Dog(string fur, bool tail, int legs, string breed, string size, bool isregistered)
        :LeggedMammal(fur, tail, legs) 
        {
        mBreed = breed;
        mSize = size;
        isRegistered = isregistered;
        }


    string getBreed() {
        return mBreed;
    }

    void setBreed(string breed) {
        mBreed = breed;
    }

    void setSize(string size) {
        mSize = size;
    }

    string getSize() {
        return mSize;
    }

    void setIsRegistered(bool isregistered) {
        isRegistered = isregistered;
    }

    bool getIsRegistered() {
        return isRegistered;
    }

};

#endif
