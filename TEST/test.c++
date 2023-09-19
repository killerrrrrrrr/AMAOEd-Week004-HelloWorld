#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int a = 123;
    int b = 5;

    if (b < 3 && b > 0) {
        a = 321;
        switch (b)
        {
        case 1:
            a = a * 2;
            break;
        case 2:
            a = a * 3;
            break;
        }
    } else {
        a = a * 4;
    }
    
    cout << "a: " << a << endl;

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}