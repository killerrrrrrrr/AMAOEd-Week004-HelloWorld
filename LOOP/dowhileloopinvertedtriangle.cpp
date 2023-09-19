#include <iostream>

using namespace std;

int main() {
    int height = 0;

    cout << "Enter the number of height: ";
    cin >> height;
    cout << endl;

    int row = height;

    do {
        int space = 0;
        while (space < height - row) {
            cout << " "; 
            space++;
        } 
            int col = 0;
            while (col < 2 * row - 1) {
                cout << "* ";
                col +=2;
        }
    cout << endl;
    row--;
    } while (row > 0);

    return 0;
}
