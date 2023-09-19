#include <iostream>

using namespace std;

int main() {
    char n[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int numrows;

    cout << "Enter the height (1-10 only): ";
    cin >> numrows;
    cout << endl;

    if (numrows < 1 || numrows > 10) {
        cout << "Invalid input. Height must be between 1 and 10." << endl;
        return 1;
    }

    for (int i = 0; i < numrows; i++) {
        for (int t = 0; t < numrows - i - 1; t++) {
            cout << " ";
        }
        for (int t = 0; t < (i * 2 ) + 1; t++) {
            cout << n[i];
        }
        cout << endl;
    }
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}