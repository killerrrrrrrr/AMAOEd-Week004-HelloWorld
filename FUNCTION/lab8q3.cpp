#include <iostream>

using namespace std;

int calculateFibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        int prev = 1;
        int current = 1;
        int next;

        for (int i = 3; i <= n; ++i) {
            next = prev + current;
            prev = current;
            current = next;
        }
        return current;

    }
}
int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please input a positive integer." << endl;
    } else {
        int result = calculateFibonacci(n);
        cout << "The " << n << "th Fibonacci number is: " << result << endl;
    }
    return 0; 
}