#include <iostream>
using namespace std;

// Function to perform division and return the integer part of the quotient
int divideAndGetIntegerPart(int dividend, int divisor) {
    if (divisor == 0) {
        cout << "Division by zero is not allowed." << endl;
        return 0;
    }
    int quotient = dividend / divisor;
    return quotient;
}

int main() {
    int results[3];  // Array to store the results

    // Get six non-zero integers from the user and perform division
    for (int i = 0; i < 3; i++) {
        int dividend, divisor;
        
        cout << "Enter the " << i+1 << "st dividend (non-zero integer): ";
        cin >> dividend;
        
        cout << "Enter the " << i+1 << "st divisor (non-zero integer): ";
        cin >> divisor;

        results[i] = divideAndGetIntegerPart(dividend, divisor);
    }

    // Display the results
    for (int i = 0; i < 3; i++) {
        cout << "Result " << i+1 << ": Integer part of the quotient is " << results[i] << endl;
    }

    return 0;
}
