// Example of Polymorphism (The second form Overloading)

#include <iostream>
#include <cstdlib>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return sum(a, b) + c;
}

float sum(float a, float b) {
    return a + b;
}

float sum(float a, float b, float c) {
    return sum(a, b) + c;
}

int main() {

    int a = 1;
    int b = 2;
    int c = 3;

    float x = 1.2203;
    float y = 394.1;
    float z = 465.0032;

    cout << "The sum of a and b is " << sum(a, b) << endl;
    cout << "The sum of a, b and c is " << sum(a, b, c) << endl;
    cout << "The sum of x and y is " << sum(x, y) << endl;
    cout << "The sum of x, y and z is " << sum(x,y,z) << endl;

    return 0;
}

