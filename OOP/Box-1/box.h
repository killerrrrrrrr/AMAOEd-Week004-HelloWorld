#include <string>

using namespace std;

class Box {
    private:

    // Properties
    string Color;
    int Length, Width, Height;

    public:
    // Methods
    Box(int, int, int);
    // Accessors
    int getVolume();
    int getLength();
    void setColor(string);
    string getColor();
};

Box::Box(int length, int width, int height) {
    this->Length = length;
    this->Width = width;
    this->Height = height;
}

int Box::getVolume() {
    return this->Length * this->Width * this->Height;
}

int Box::getLength() {
    return this->Length;
}

void Box::setColor(string color) {
    this->Color = color;
}

string Box::getColor() {
    return this->Color;
}
