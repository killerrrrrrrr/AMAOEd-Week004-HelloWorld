#include <iostream>

using namespace std;

int main() {
    int n[6];

    for (int i = 0; i < 6; i++) {
        cout << "Enter number [" << i + 1 << "]: ";
        cin >> n[i];
    }
    cout << endl;

    for (int i = 0; i < 6; i++) {
        for (int t = i; t < 6; t++) {
            if (n[i] > n[t]) {
                int temp = n[i];
                n[i] = n[t];
                n[t] = temp;
            }
        }
    }
    cout << "Sorted integers in ascending order:" << endl;
    for (int i = 0; i < 6; ++i) {
        cout << n[i] << endl;
    }
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}