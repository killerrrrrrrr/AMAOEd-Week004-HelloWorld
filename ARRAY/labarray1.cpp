#include <iostream>

using namespace std;

int main() {
    int n[6];

    //Get user input
    for (int i = 0; i < 6; i++) {
        cout << "Enter number [" << i + 1 << "]: ";
        cin >> n[i];
    }
    cout << endl;

    // Display back to user
    cout << "The entered numbers are: " << endl;
    for (int i = 0; i < 6; ++i) {
        cout << n[i] << endl;
    }
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}