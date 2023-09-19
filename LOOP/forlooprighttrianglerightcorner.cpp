#include <iostream>

using namespace std;

int main() {
    int height;

    cout << "Enter the number of height: ";
    cin >> height;
    cout << endl;

    for (int row = 0; row < height; row++) {
        for (int space = 0; space < height - row - 1; space++) {
            cout << " ";
        }
        for (int space = 0; space < row + 1; space++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}