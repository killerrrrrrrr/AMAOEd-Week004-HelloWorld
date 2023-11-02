#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

void displayDigits (short number) {
    

        short tenDigits = number / 10;
        short oneDigits = number % 10;

        cout << tenDigits << " " << oneDigits << endl;
    
}

int main () {
    short number;

    cout << "Enter a number: ";
    cin >> number;

    if (number >=10 && number <= 99) {

    displayDigits(number);
    } else {
        cout << "Invalid input. Please enter a number between 10 and 99." << endl;
    }

    return EXIT_SUCCESS;
}