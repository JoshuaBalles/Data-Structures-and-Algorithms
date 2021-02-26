#include <iomanip>
#include <iostream>

using namespace std;

int main() {

    float quiz[5], average = 0;

    for (int x = 0; x <= 4; x++) {
        cout << "Please enter your grade on Quiz " + to_string(x + 1) + ":\n";
        cin >> quiz[x];
        average = average + quiz[x];
    }

    average = average / 5;

    cout << "Your average score is ";
    cout << setprecision(2) << fixed << average << endl;

    if (average > 49.9) {
        cout << "PASSED" << endl;
    } else
        cout << "FAILED" << endl;

    return 0;
}

/*
Activity 1 - Programming Exercise A.
Create a program that accepts the scores of five (5) quizzes,
displays the average score, and the student’s grade status (PASSED / FAILED)
*/