#include <string>
#include <iostream>
#include "Dog.h"

using namespace std;

class LeggedMammal {

    private:
        string mFur;
        bool mTail;
        int mLegs;

    public:
        LeggedMammal(string fur, bool tail, int legs) {
            mFur = fur;
            mTail = tail;
            mLegs = legs;
        }

        void DisplayLeggedMammal() {
        cout << "Number of Legs: " << mLegs << endl;
        cout << "Fur Type: " << mFur << endl;
        cout << "Has Tail: " << mTail << endl;
    }

};
