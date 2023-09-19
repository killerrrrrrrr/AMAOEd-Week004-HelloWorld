#include <iostream>

using namespace std;

int main() {

    char input;
    int count = 0;
    bool done = false;

    while (!done) {

        cout << count << '\n';
        cout << "Please enter \"Y\" to continue or \"N\" to quit: ";
        cin >> input;

        if (input != 'Y' && input != 'y' && input != 'N' && input != 'n')
            cout << "\"" << input << "\"" << " is not a valid choice" << '\n';
        else if (input == 'Y' || input == 'y')
            count++;
        else if (input == 'N' || input == 'n')
            done = true;
    }

    return 0;
}