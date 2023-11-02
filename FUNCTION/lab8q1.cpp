#include <iostream>

using namespace std;

// Function to perform integer division and return the non-decimal part of the quotient
int divideIntegers(int dividend, int divisor) {
    if (divisor != 0) {
        return dividend / divisor;
    } else {
        // Handle division by zero
        cerr << "Error: Division by zero!" << endl;
    }
}

int main() {
    // Initialize variables to store user input
    int dividend, divisor;

    // Prompt the user and get input for six divisions
    for (int i = 1; i <= 3; i++) {
        cout << "Enter dividend for division " << i << ": ";
        cin >> dividend;

        cout << "Enter divisor for division " << i << ": ";
        cin >> divisor;

        // Call the divideIntegers function and display the result
        int result = divideIntegers(dividend, divisor);
        cout << "Result of division " << i << ": " << result << endl;
    }

    return 0;
}
 
