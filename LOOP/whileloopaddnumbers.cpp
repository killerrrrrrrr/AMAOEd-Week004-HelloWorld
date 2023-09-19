#include <iostream>

using namespace std;

int main() {
    int input, sum = 0;
    cout << "Enter numbers to sum, type 'q' to end the list: " << endl;
    while (cin >> input)
        sum += input;
        cout << "Sum = " << sum << '\n';

    return 0;
}