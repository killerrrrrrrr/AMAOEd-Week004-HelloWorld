#include <iostream>

using namespace std;

int main () {
    const int ROWS = 5;
    const int COLS = 7;
    int seats[ROWS][COLS];

    for (int i = 0; i < ROWS; ++i) 
    {
        for (int j = 0; j < COLS; ++j) {
            seats[i][j] = (i * COLS) + (j+1);
        }
    }

    while (true)
    {
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                if (seats[i][j] == 0) {
                    cout << " 0 ";
                } else {
                    cout << " " << seats[i][j] << " ";
                }            
            }
            cout << endl;
        }
        cout << endl;

        int seatnumber;
        cout << "Enter a seat number (1 - " << ROWS * COLS << ") ";
        cin >> seatnumber;

        if (seatnumber < 1 || seatnumber > ROWS * COLS) {
            cout << "Invalid seat number. Please enter a valid seat number." << endl;
        } else {
            int row = (seatnumber - 1) / COLS;
            int col = (seatnumber - 1) % COLS;

            if (seats[row][col] == 0) {
                cout << "Seat is already taken." << endl;
            }else {
                seats[row][col] = 0;
                cout << "Seat successfully reserved." << endl;
            }
        }
    }

    return 0;
    
}