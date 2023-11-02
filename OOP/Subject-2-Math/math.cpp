#include <cstdlib>
#include <iostream>
#include "math.h"

using namespace std;

int main() {
    Subject comp("Computer Programming 1", "IT0001", 3);
    Math math;

    cout << "Subject Details: " << comp.getSubject() << endl;
    cout << "Subject Details: " << math.getSubject() << endl;

    return 0;
}