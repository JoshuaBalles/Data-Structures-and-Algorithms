#include <iostream>

using namespace std;

int theStack[12345], stackIndex = 12345, top = -1;

void stackPush(int number);
void stackPop();
void stackPeep();
void printStack();

int main() {

    int input, number;

    cout << "1: Push to stack." << endl
         << "2: Pop stack." << endl
         << "3: Display stack elements." << endl
         << "4: Peek stack." << endl
         << "Input an option. Input a character to end program: ";

    while (cin >> input) {
        if (input == 1) {
            cout << "Input a number to push to stack: ";
            cin >> number;
            stackPush(number);
            cout << "Input an option. Input a character to end program: ";
        } else if (input == 2) {
            stackPop();
            cout << "Input an option. Input a character to end program: ";
        } else if (input == 3) {
            printStack();
            cout << "Input an option. Input a character to end program: ";
        } else if (input == 4) {
            stackPeep();
            cout << "Input an option. Input a character to end program: ";
        } else
            cout << "Invalid input.";
    }
    cout << "Program ended.";
    return 0;
}

void stackPush(int number) {
    if (top >= stackIndex - 1) {
        cout << "The stack overflowed." << endl;
    } else {
        top++;
        theStack[top] = number;
    }
}

void stackPop() {
    if (top <= -1) {
        cout << "The stack underflowed." << endl;
    } else top--;
}

void stackPeep() {
    if (top <= -1) {
        cout << "The stack underflowed." << endl;
    } else cout << "The top element is: " << theStack[top] << endl;
}

void printStack() {
    if (top >= 0) {
        cout << "The stack's element(s) is/are: ";
        for (int i = top; i >= 0; i--)
            cout << theStack[i] << " ";
        cout << endl;
    } else cout << "The stack is empty.";
}

/*
 * Activity 4 - Programming Exercise B.1
 * Create two programs that simulates a stack and queue.
 * Each program must have the user defined functions
 * push, pop, peek, and printContent.
 * DO NOT IMPORT STACK OR QUEUE HEADERS (#include <stack/queue>)
 */