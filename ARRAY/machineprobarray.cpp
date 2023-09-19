#include <iostream>

using namespace std;

int main() {
// Use two-dimensional array with size 7 columns and 5 rows.
int table[5][7] = {
    {1, 2, 3, 4, 5, 6, 7},
    {8, 9, 10, 11, 12, 13, 14},
    {15, 16, 17, 18, 19, 20, 21},
    {22, 23, 24, 25, 26, 27, 28},
    {29, 30, 31, 32, 33, 34, 35}};
// Seat numbers are populated during run-time.
for (int r = 0; r < 5; r++)
{
    for (int c = 0; c < 7; c++)
        cout << table[r][c] << " ";
        cout << endl;
}
cout << endl;
// User is asked to input a seat number.
int res;

    cout << "Enter seat number to reserve: ";
    cin >> res;
    cout << endl;
// Seat number chosen is replaced by 0.

    if (res < 0 || res > 35) {
        cout << "Invalid seat number. Please choose from 1-35." << endl;
    } else {
        int row = (res - 1) / 7;
        int col = (res - 1) % 7;
    
        if (seats[row][col] == 0) {
                cout << "Seat is already taken." << endl;
            } else {
                seats[row][col] = 0;
                cout << "Seat successfully reserved." << endl;
            }
// Program displays a remark “Seat successfully reserved” when reservation is done.
// User is not allowed to reserve a previously reserved seat.  Display “Seat is taken” remarks.
// User is not allowed to enter an invalid seat number.  Display an error message.
// Program continuously loops.

     cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}