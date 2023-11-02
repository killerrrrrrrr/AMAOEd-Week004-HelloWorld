#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class Polygon {
    private:
        string mName, mColor;
        int mSides;

    public:
        Polygon (string name, string color, int sides) {
            mName = name;
            mColor = color;
            mSides = sides;
        }

        string getName() {
            return mName;
        }

        string getColor() {
            return mColor;
        }

        int getSides() {
            return mSides;
        }


};

int main() {

    Polygon polygon("Pentagon", "Pink", 5);

    cout << "Name: " << polygon.getName() << endl;
    cout << "Color: " << polygon.getColor() << endl;
    cout << "No. of Sides: " << polygon.getSides() << endl;

    return 0;
}
