#ifndef _BOX
#define _BOX

#include <string>
#include "IBox.h"

using namespace std;

class Box : public IBox {
    private:
        int mLength, mWidth, mHeight;
        string mColor;

    public:
        Box(int, int, int, string);
        int getVolume();
        string getColor();
};

Box::Box(int length, int width, int height, string color) {
    this->mLength = length;
    this->mWidth = width;
    this->mHeight = height;
    this->mColor = color;
}

int Box::getVolume() {
    return this->mLength * this->mWidth * this->mHeight;
}

string Box::getColor() {
    return this->mColor;
}

#endif