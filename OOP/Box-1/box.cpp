#include <cstdlib>
#include <iostream>
#include "box.h"

using namespace std;


int main() {
    Box box(2,3,4);
    cout << "The volume of our box is ";
    cout << box.getVolume() << "." << endl;

    cout << "What is the length?" << endl;
    cout << "The length is " << box.getLength() << endl;

    box.setColor("Black");
    cout << "What is the color?" << endl;
    cout << box.getColor() << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
