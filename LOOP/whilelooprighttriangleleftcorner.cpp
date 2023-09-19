#include <iostream>

using namespace std;

int main() {
    int height = 0;

    cout << "Enter the number of height: ";
    cin >> height;
    cout << endl;

    int row = 0;
    while (row < height + 1) {
        int space = 0;
        while (space < row) {
            cout << "*";
            space++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
