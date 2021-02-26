#include <iostream>
#include <stack>

using namespace std;

int main() {

    // Initial stack
    stack<float> theStack1;

    float input = 0, total = 0, count = 0;

    // Input
    while (input != 999) {
        cout << "Enter a number: ";
        cin >> input;
        theStack1.push(input);
        total = total + input;
        count++;

        // pop last element
        if (input == 999) {
            theStack1.pop();
            total = total - 999;
            count--;
        }
    }

    if (count == 0) {
        cout << "The stack is empty." << endl;
    } else {
        // Flip stack
        stack<float> theStack2;

        while (!theStack1.empty()) {
            theStack2.push(theStack1.top());
            theStack1.pop();
        }
        // 1st output
        cout << "Numbers in STACK: ";

        while (!theStack2.empty()) {
            cout << theStack2.top() << " ";
            theStack2.pop();
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
 * AVERAGE: 31.25 [NOTE: It should be 20]
*/