#include <iostream>

using namespace std;

int main() {

    float score = 0, total = 0, count = 0;

    cout << "Enter scores. Enter any character to end." << endl;

    while (cin >> score) {
        total = total + score;
        count++;
    }

    total = total / count;

    if (total >= 94 && total <= 100) {
        cout << "Your GPA is 1.00" << endl;
    } else if (total >= 88.5 && total <= 93.99) {
        cout << "Your GPA is 1.25" << endl;
    } else if (total >= 83 && total <= 88.49) {
        cout << "Your GPA is 1.50" << endl;
    } else if (total >= 77.5 && total <= 82.99) {
        cout << "Your GPA is 1.75" << endl;
    } else if (total >= 72 && total <= 77.49) {
        cout << "Your GPA is 2.00" << endl;
    } else if (total >= 65.5 && total <= 71.99) {
        cout << "Your GPA is 2.25" << endl;
    } else if (total >= 61 && total <= 65.49) {
        cout << "Your GPA is 2.50" << endl;
    } else if (total >= 55.5 && total <= 60.99) {
        cout << "Your GPA is 2.75" << endl;
    } else if (total >= 50 && total <= 55.49) {
        cout << "Your GPA is 3.00" << endl;
    } else
        cout << "You FAILED" << endl;

    return 0;
}

/*
Activity 1 - Programming Exercise B.
Create a program that accepts a score and displays the grade point average of
the score. The program must be in an infinite loop and must keep accepting
inputs.
*/