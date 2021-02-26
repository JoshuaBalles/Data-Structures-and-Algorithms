#include <iostream>
#include <iterator>

using namespace std;

int main() {

    // Stack in a Float array
    float theStack[100];

    float input = 0, total = 0;
    int count = 0;

    // Input
    while (input != 999) {
        cout << "Enter a number: ";
        cin >> input;
        theStack[count] = input;
        total = total + input;
        count++;

        // Remove last input
        if (input == 999) {
            total = total - 999;
            count--;
        }
    }

    if (count == 0) {
        cout << "The stack is empty" << endl;
    } else {
        // 1st output
        cout << "Numbers in STACK: ";

        for (int x = 0; x < count; x++) {
            cout << theStack[x] << " ";
        }
        total = total / count;

        // 2nd output
        cout << endl << "AVERAGE: " << total;
    }

    return 0;
}

/* 
 * Programming Exercise A.
 * Create a program that allows integers to be added to the stack and stop
 * accepting numbers once 999 is entered. Display all the stack elements in the
 * order it was entered and get the average. (NOTE: Do not include 999) (Create
 * 2 programs: using array and another stack) 
 * Enter a number: 52
 * Enter a number: 5
 * Enter a number: 20
 * Enter a number: 3
 * Enter a number: 999
 * Numbers in STACK: 52 5 20 3
 * AVERAGE: 31.25 (This should be 20)
*/