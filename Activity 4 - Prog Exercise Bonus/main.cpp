#include <iostream>

using namespace std;

void halfPyramid(int rows);

int main() {
    int rows;

    cout << "Enter number of rows of the pyramid: ";
    cin >> rows;
    if (rows <= 26) {
        halfPyramid(rows);
    } else
        cout << "Invalid input. "
             << "There are only 26 letters in the english alphabet.";

    return 0;
}

void halfPyramid(int rows) {
    char alphabet = 'A';
    for (int index1 = 1; index1 <= rows; index1++) {
        for (int index2 = 1; index2 <= index1; index2++) {
            cout << alphabet;
        }
        alphabet++;
        cout << endl;
    }
}

/*
 * Activity 4 - Programming Exercise Bonus
 * Create a program to print out a half pyramid using letters from the alphabet.
 * The user must enter the size of the pyramid from 1 to 10.
 */