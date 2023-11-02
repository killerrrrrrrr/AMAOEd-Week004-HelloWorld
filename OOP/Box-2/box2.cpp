#include <iostream>
#include "box2.h"

using namespace std;

int main() {
    
Box box (2,4,6,"black");

cout << box.getVolume() << endl;
cout << box.getColor() << endl;

return 0;

};